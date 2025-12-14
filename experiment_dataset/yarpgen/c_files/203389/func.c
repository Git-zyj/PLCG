/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203389
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 18; i_2 += 2) 
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-6723)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_6)))))) & (var_0)));
                    var_11 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) - (3535780362U)))))) ? (14699692543809503204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_12 = -8761393666115715056LL;
                }
                var_13 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (unsigned char)255))), (var_4)));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) ((_Bool) 5188563032553693036LL))) : (((/* implicit */int) var_9))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_4)), (arr_4 [14LL] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_7);
                                var_16 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)38))))));
                            }
                            for (short i_6 = 3; i_6 < 19; i_6 += 4) 
                            {
                                arr_17 [i_6] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((var_1) != (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((unsigned char) ((unsigned int) -8761393666115715056LL)))));
                            }
                            for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                            {
                                arr_22 [i_0] = ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)50701)), (-8761393666115715056LL)))))) ? (((/* implicit */int) (short)30590)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)75)) || (((/* implicit */_Bool) (unsigned char)184))))));
                                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) : (((long long int) 14699692543809503204ULL)))) & (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)135)) == (1454425953)))))))));
                            }
                            arr_23 [i_0] [i_1] [14U] [i_1] = var_0;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 13; i_8 += 1) 
    {
        for (unsigned char i_9 = 3; i_9 < 11; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-20941))));
                    var_20 = var_3;
                    var_21 = ((/* implicit */unsigned int) ((((min((var_1), (((/* implicit */int) (unsigned char)146)))) + (var_5))) / (((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) 1347043911U))))) ? (((var_5) / (var_6))) : (1382908587)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        arr_32 [i_8 + 1] [i_10] [i_10] [i_8 + 1] [i_8] [i_8 + 1] = ((/* implicit */signed char) ((((long long int) var_4)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) 4266710313U);
                            var_24 = ((/* implicit */unsigned short) (signed char)3);
                        }
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(13957530799394261404ULL)))) ? (((/* implicit */int) (((((_Bool)0) || (((/* implicit */_Bool) 33440702596269913LL)))) && (((((/* implicit */_Bool) -1950476177)) || (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) ((short) (unsigned short)27755))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (short)31931)) : (((/* implicit */int) (unsigned char)216))))) ? (max((arr_2 [i_8 - 1] [i_11]), (arr_2 [i_11] [i_11]))) : (((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) * (16760079274152687347ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_8] [i_8]))))), (((((/* implicit */_Bool) arr_4 [(unsigned short)3] [i_9] [(unsigned short)3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) : (var_0))))))));
                            var_28 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1773163684U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-1LL))) - (((-1133347741248449266LL) + (((/* implicit */long long int) var_1)))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (unsigned short)39639))))) ? (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (signed char)-7))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)57))))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
