/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235762
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
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) ? (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))) : (((/* implicit */long long int) var_4)))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [14ULL] [4LL] [4ULL] &= ((/* implicit */long long int) (-((~(((/* implicit */int) var_1))))));
                    var_17 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_0));
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    arr_10 [i_3] [2LL] [2LL] [i_0] |= ((/* implicit */unsigned char) var_8);
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        var_19 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -198796484)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) var_7))));
                        var_20 = ((/* implicit */_Bool) (((!((!(var_1))))) ? (((((/* implicit */_Bool) -135828796)) ? (1396714247U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (+((+(var_3))))))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(var_1))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))))));
                        var_22 -= var_2;
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) var_0);
                        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(var_14))))));
                        arr_16 [i_5] [i_0] [1LL] [i_0] [i_0] = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_13))) : (((/* implicit */long long int) (+(var_12))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) -7799371538993214409LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))) ? (var_13) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))));
                            arr_19 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) : (((var_6) ? ((-(var_4))) : (((/* implicit */int) var_6))))));
                            arr_20 [i_0] [i_0] [(unsigned char)10] [(_Bool)1] [14U] [i_5] [1LL] = ((/* implicit */long long int) var_12);
                        }
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_8))))));
                            var_28 &= ((/* implicit */long long int) var_8);
                        }
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 1) 
                        {
                            arr_25 [12] [i_0] = var_13;
                            var_29 = var_11;
                            arr_26 [i_8] [i_0] [i_3] [i_0] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned int) var_4)) : (var_5))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))))));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) (+(((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))));
                        arr_31 [i_0] [i_1] [i_3] [10LL] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-9055190026757344716LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(var_7))))))) : ((-((+(var_0)))))));
                        arr_32 [i_9] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -198796484)) ? (457696306) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(var_11)))) : (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_1)))));
                        var_32 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(2912807603U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) -457696306)))))))));
                    }
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (-((+((+(((/* implicit */int) var_7))))))));
                        var_33 = ((/* implicit */_Bool) var_13);
                        arr_37 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                    }
                    arr_38 [8LL] [16LL] [(_Bool)1] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) -4362528537219099976LL)) ? (((/* implicit */unsigned long long int) 0U)) : (2994780249203593961ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(9055190026757344715LL))))));
                    var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(var_11))))));
                    var_36 = ((/* implicit */long long int) (-(4522827061319662972ULL)));
                }
                /* LoopNest 3 */
                for (long long int i_12 = 4; i_12 < 16; i_12 += 1) 
                {
                    for (unsigned int i_13 = 2; i_13 < 15; i_13 += 1) 
                    {
                        for (int i_14 = 4; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_10)) : (var_9)))) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))) : (((/* implicit */unsigned long long int) var_0))));
                                var_38 -= ((/* implicit */int) (!((!((!(var_2)))))));
                                arr_53 [i_0] = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                } 
                arr_54 [i_1] [i_0] = ((/* implicit */unsigned char) (-((+(var_0)))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) (((!((_Bool)0))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(var_7)))))));
                            arr_61 [i_0] [i_1] [(_Bool)1] [16LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_17 = 2; i_17 < 20; i_17 += 3) 
    {
        for (int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                {
                    arr_72 [22] [i_18] [22] &= ((/* implicit */int) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        for (long long int i_21 = 2; i_21 < 22; i_21 += 1) 
                        {
                            {
                                arr_77 [i_17] = ((/* implicit */long long int) (((_Bool)0) ? (134213632) : (((/* implicit */int) var_2))));
                                arr_78 [i_17 - 1] [i_17] [i_19] [1LL] [i_20] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -340754164)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2913532907U)) ? (((/* implicit */int) (_Bool)1)) : ((-(-135828806)))));
                            }
                        } 
                    } 
                    var_41 = (!(((/* implicit */_Bool) (-(var_13)))));
                    arr_79 [i_17 + 2] [16U] [i_18] [(unsigned char)22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (-7265498243570177785LL) : (((/* implicit */long long int) -198796479))));
                }
            } 
        } 
    } 
}
