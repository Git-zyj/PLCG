/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45201
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [(unsigned short)6] [i_2] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */signed char) min((-7775607694776957016LL), (((/* implicit */long long int) (_Bool)0))));
                        arr_11 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((7775607694776957041LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] = max((1330562121293163130ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1374498243U))))), (((((/* implicit */_Bool) max((-3951645379957962319LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) var_10)), (1407265644U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
                            arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((1330562121293163129ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((var_2) << (((((/* implicit */int) (unsigned short)35267)) - (35246))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)9))))))))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [11ULL] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) 12077816651784558309ULL);
                            arr_22 [4U] [i_5] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) 66584576);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) min(((~(((6952891364166757969ULL) << (((((/* implicit */int) (signed char)112)) - (59))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)89)) : (-66584576))), (((/* implicit */int) var_5)))))));
                            arr_28 [i_6] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (((((/* implicit */_Bool) 3892508549849601983ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) : (2463389824635630636ULL))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            arr_31 [i_0] [i_0] [4U] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? ((+(((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))) : ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                            arr_32 [i_3] [i_1] [i_3] [i_0] [3U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) (unsigned char)233))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_36 [i_0] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((var_1) >= (((/* implicit */int) var_3)))))))) ? ((-(((((/* implicit */_Bool) (unsigned char)235)) ? (var_4) : (72057594037927935ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4212753721U), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (var_7))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_9))))))));
                        }
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) min((-6993039902976561753LL), (((/* implicit */long long int) var_3))))) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) min(((unsigned char)214), (((/* implicit */unsigned char) (signed char)49))))), (((0) / (((/* implicit */int) var_6))))))));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_0] [i_9] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -99973547533135158LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_8)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)34721)))))) : (((((/* implicit */_Bool) max((139611588448485376LL), (139611588448485376LL)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)248))))));
                        arr_42 [(signed char)2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2928559516295481891ULL)) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (82213549U)))))))));
                        arr_43 [i_0] [4] [i_2] [4] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1786)) ? (66584582) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5780))) : (((((/* implicit */_Bool) (unsigned char)221)) ? (562949953421311LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (max((var_2), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) -1001356921)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))))));
                        arr_44 [(signed char)8] [i_1] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (signed char)3)) << (((((/* implicit */int) var_10)) - (158))))) << (((max((((/* implicit */long long int) (unsigned short)20830)), (-4689506961567293083LL))) - (20829LL)))));
                    }
                    arr_45 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3776509353195257079LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25432))) : (17116181952416388497ULL)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) (unsigned short)65504)) ? (9446278194500399237ULL) : (((/* implicit */unsigned long long int) -657507924)))), (((/* implicit */unsigned long long int) 1785137449U)))));
}
