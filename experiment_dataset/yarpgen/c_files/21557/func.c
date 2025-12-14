/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21557
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_15)), (max((2524925894531453644ULL), (((/* implicit */unsigned long long int) var_7)))))) + (((/* implicit */unsigned long long int) ((((67553994410557440LL) % (((/* implicit */long long int) ((/* implicit */int) var_18))))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)0))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -794039807)), (13270882360475021734ULL)));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)112)) < (((/* implicit */int) (signed char)0))));
                        var_23 = ((/* implicit */unsigned int) ((arr_11 [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned char)0))) + (((/* implicit */int) (signed char)26))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)253)))))));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 936086180U))));
                            var_27 = ((/* implicit */long long int) var_9);
                        }
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) (signed char)43);
                            arr_22 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_2] [i_2]))));
                            var_29 -= ((/* implicit */unsigned short) (unsigned char)255);
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) max((var_9), (((/* implicit */short) (unsigned char)25))))), (((unsigned int) arr_7 [i_0] [i_1] [i_2])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_7] [i_0])))));
                        arr_25 [i_2] = ((/* implicit */long long int) var_7);
                    }
                    var_31 = ((/* implicit */unsigned char) max((min((13908676890939525601ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)172))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)-7962), (((/* implicit */short) (unsigned char)4))))), (((((/* implicit */int) arr_14 [i_0])) << (((((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_2] [i_2])) + (81))) - (21))))))))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [(unsigned short)2] [(_Bool)1] [i_0] [i_0])) > (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))) != (arr_5 [i_1] [i_1])));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */short) var_14);
}
