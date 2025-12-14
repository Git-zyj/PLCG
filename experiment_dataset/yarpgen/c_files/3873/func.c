/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3873
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_6)) >= ((~(((/* implicit */int) (unsigned short)61252))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_9 [3U] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) 2121825184675141078LL));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (var_7) : (min((1928418008000543753ULL), (1928418008000543753ULL)))));
                                var_13 = ((/* implicit */_Bool) ((16636251526692788961ULL) * (8341434780519467027ULL)));
                                arr_13 [i_0] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1514572486U)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)183))));
                                var_14 -= (unsigned short)44067;
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [6ULL])))) - (3054909447850467302ULL))))));
                            }
                            for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                            {
                                var_16 = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2777898070U)))) != (8518192271240300608ULL))));
                                var_17 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_2)))), (((unsigned long long int) 16518326065709007840ULL))));
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-4882479442556068930LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)19309), (((/* implicit */unsigned short) (_Bool)0)))))) : (min(((~(arr_10 [(_Bool)1] [i_0] [i_1] [i_2] [i_3] [i_5 - 2] [i_5 - 2]))), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_3] [i_3] [i_5] [i_5 - 2]))))));
                            }
                            var_18 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 7725576510741282735ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned short)21468)), (8048024479229788020LL))), (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((1810492547016762678ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_0] [i_6] [(unsigned char)9]))));
                        var_20 &= ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) 3060177170411365650ULL)))));
                            var_22 -= ((/* implicit */unsigned char) arr_0 [i_6]);
                            arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            arr_27 [i_1] [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) var_10);
                        }
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_31 [i_1] [i_1] [i_9] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_24 [i_0] [i_1] [i_9] [i_0] [i_1]), (arr_24 [i_9] [i_0] [i_0] [i_0] [i_0]))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2956194986645446333ULL)) ? (((arr_14 [i_0] [i_0] [i_1] [i_1] [i_9] [i_9] [i_9]) ? (7610651968067054061LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9] [i_9] [i_1] [i_1] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (3060177170411365650ULL)))) || (((/* implicit */_Bool) (-(15386566903298185959ULL)))))) ? (((/* implicit */unsigned long long int) var_5)) : (max((((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 7610651968067054061LL)) : (7560282066268802686ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))))));
                    arr_32 [(unsigned short)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (1928418008000543753ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 3) 
                        {
                            {
                                arr_37 [i_11] [i_11] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)38355);
                                var_25 = ((/* implicit */long long int) ((max((16030002165775868989ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) << (((((/* implicit */int) var_4)) + (62)))));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13246))));
                    arr_43 [i_1] [i_12] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (signed char)-119))))))));
                }
                arr_44 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)27181))) ? (1810492547016762654ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4618188386467337705ULL) / (15386566903298185965ULL)))) ? (((/* implicit */int) (unsigned short)38355)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(unsigned char)0] [i_1]))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) 3060177170411365657ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4591408224840982902ULL) == (15386566903298185965ULL))))) : (((unsigned int) -1231586557117913804LL)))))));
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 14886978368719154551ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) > (((((/* implicit */_Bool) 2091928152028531347LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2376158250437801115ULL)))))) : (((((/* implicit */_Bool) 5598464464612114261ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)27180)))))))));
}
