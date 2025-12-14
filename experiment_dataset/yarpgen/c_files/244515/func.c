/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244515
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)43)) <= (331972504)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)42)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)61463)) ? (1386580644273041158ULL) : (((/* implicit */unsigned long long int) (~(2013901563)))))), (((/* implicit */unsigned long long int) (+(var_6)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (max((((/* implicit */int) (unsigned char)53)), (-331972496))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (unsigned short)36111);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((649032837U) / (((/* implicit */unsigned int) -1901586962))))) ? (((/* implicit */long long int) ((unsigned int) arr_7 [i_4]))) : (((var_6) % (((/* implicit */long long int) 3645934458U)))))) ^ (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_4])))))))))));
                                var_19 = ((/* implicit */unsigned long long int) arr_5 [i_1] [11U] [i_3 - 1]);
                                var_20 -= ((/* implicit */unsigned int) arr_3 [i_4]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((((((/* implicit */int) (unsigned char)42)) | (((((-1901586950) + (2147483647))) << (((((/* implicit */int) var_7)) - (197))))))) ^ ((-(min((-837751219), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)182)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((-837751234) & (-1889870795)));
}
