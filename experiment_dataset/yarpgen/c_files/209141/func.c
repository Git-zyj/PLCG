/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209141
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_17 += ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0 + 3] [i_1] [i_1] [i_1] [i_2 + 1] [i_3])))) != (min((8191LL), (((/* implicit */long long int) -1961929045)))));
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 1925260331U)))) >= (((unsigned int) var_16))));
                        arr_8 [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) min((((arr_0 [i_0 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (arr_7 [i_3] [i_2] [i_1] [i_0]))) <= (((/* implicit */long long int) (~(33553920))))))));
                        arr_9 [i_0 - 1] = ((/* implicit */int) (_Bool)1);
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((((-1961929045) % (((/* implicit */int) arr_2 [i_3] [i_1])))) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1] [i_0] [i_1])))) < (min((((/* implicit */int) (_Bool)1)), (1961929045)))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_14))))));
                            arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] |= ((/* implicit */short) min((min((6169353926081003859LL), (((/* implicit */long long int) ((1007867327) ^ (var_10)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1689353932)) ? (1689353955) : (-1689353932))))));
                        }
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)43955);
                        arr_20 [i_4] = min((((/* implicit */long long int) (unsigned short)9045)), (-9223372036854775790LL));
                    }
                    arr_21 [i_0 + 3] [i_0 + 3] = ((/* implicit */long long int) (-2147483647 - 1));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_29 [i_6] [i_6] [i_2] [i_1] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_6 [i_7] [i_6] [i_6] [i_2] [i_1] [i_0])), (min((((/* implicit */unsigned int) (_Bool)1)), (4082163788U)))));
                                var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])) % (((/* implicit */int) (_Bool)1)))) != ((+(((/* implicit */int) var_5))))));
                                arr_30 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] |= ((/* implicit */short) var_11);
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) 1ULL))) || (((((/* implicit */_Bool) var_15)) && ((_Bool)1))))) ? (((2147483647) + ((-(((/* implicit */int) (signed char)68)))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) 4092U)) & (1ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-40)) || (((/* implicit */_Bool) var_10))))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_14);
    var_22 = ((/* implicit */unsigned short) ((2452430464047093772ULL) == (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
}
