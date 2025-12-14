/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234958
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
    var_10 = ((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((max((((/* implicit */int) ((unsigned short) var_5))), (var_1))) - (78)))));
    var_11 = ((/* implicit */unsigned long long int) var_0);
    var_12 = 366095344886072134LL;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [13U] = (~(70368744177663ULL));
                    var_13 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) 1149817399)) ? (16525004377217288794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((long long int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) var_7))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */unsigned long long int) -1965865519741791579LL)) : (1921739696492262794ULL));
                            arr_11 [5U] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) -1149817402)), (arr_10 [i_2] [i_4]))))) ? (((((/* implicit */int) arr_2 [i_4] [i_1])) - (((/* implicit */int) arr_2 [i_2] [i_4])))) : (((/* implicit */int) var_8))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_2] = ((unsigned long long int) ((((unsigned long long int) arr_4 [i_0] [i_2] [i_2] [i_4])) + (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                        }
                        for (long long int i_5 = 4; i_5 < 16; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) ^ (16982102494049828980ULL))) - (16982102494049828987ULL))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 809750230U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (0LL)))) ? (((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((arr_7 [i_2] [i_1] [i_2] [i_3] [i_5]) - (18168115385714816455ULL)))))) : (((16525004377217288822ULL) | (((/* implicit */unsigned long long int) 274877906943LL)))))) - (1169364131ULL)))));
                            arr_17 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_5 + 1])))) && (((/* implicit */_Bool) max((arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 3]), (((/* implicit */unsigned long long int) arr_2 [i_5 + 1] [i_5 - 3])))))));
                            arr_18 [i_0] [i_1] [12ULL] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((18446744073709551615ULL) >> (((arr_9 [i_5 + 1] [i_5] [i_5 - 4] [i_5] [i_5] [i_5 - 3] [i_5]) + (105593349))))) << (((min((((/* implicit */long long int) (unsigned short)32752)), (-8766388172394163964LL))) + (8766388172394163982LL)))));
                            arr_19 [i_5] [i_1] [i_1] = ((/* implicit */int) var_5);
                        }
                        arr_20 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) min((((/* implicit */int) var_5)), (var_1)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                        arr_21 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) arr_10 [i_1] [i_3]);
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) 798170526U)), (11124039881159897531ULL)))));
}
