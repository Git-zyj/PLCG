/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44186
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 3; i_4 < 20; i_4 += 2) 
                            {
                                var_13 = ((/* implicit */short) arr_10 [(_Bool)1] [i_1] [i_1] [i_1]);
                                var_14 = ((/* implicit */_Bool) max((((arr_4 [i_0]) ? (min((6253770804117927763ULL), (3ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-30))))))), (((/* implicit */unsigned long long int) var_12))));
                                arr_15 [2] [i_3] [0LL] [i_2] [2] [i_1] [2] &= ((/* implicit */int) var_5);
                            }
                            for (long long int i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) arr_10 [i_3 + 2] [(unsigned short)9] [i_3] [i_1]);
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) ((short) arr_0 [13LL] [i_5]));
                            }
                            for (long long int i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */int) var_3);
                                var_17 = ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1] [(_Bool)1]) > (arr_8 [i_1] [i_3] [i_1])));
                                arr_21 [i_1] [(short)17] [i_2] = ((/* implicit */unsigned short) var_11);
                                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(12ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1926), (((/* implicit */short) (signed char)-101))))))));
                                var_19 = ((/* implicit */unsigned short) ((18446744073709551611ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) + (((/* implicit */int) ((short) var_8))))))));
                            }
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_4 [i_0])))))) + (arr_10 [i_3 + 1] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3101))))) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (short)1925))))) : (((3ULL) ^ (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1]);
                                var_22 = ((/* implicit */int) ((15772743765651350273ULL) << (((18446744073709551612ULL) - (18446744073709551607ULL)))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((arr_6 [i_1] [i_3]) > (((/* implicit */unsigned long long int) var_11))))), (((((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_3 + 2] [i_7 - 1])) + (2147483647))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32785))))))))));
                            }
                        }
                    } 
                } 
                var_24 = min((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)116))))))), (var_0));
                var_25 = ((/* implicit */int) var_12);
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((_Bool) ((var_6) >> (((((/* implicit */int) ((unsigned char) var_2))) - (121))))));
}
