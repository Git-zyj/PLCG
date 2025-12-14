/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190502
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
    var_10 = ((/* implicit */unsigned int) (-(-958604552287018194LL)));
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) (unsigned char)115))))), (max((((/* implicit */unsigned long long int) var_3)), (2ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_9))))))) : (((/* implicit */int) ((short) 958604552287018194LL)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */_Bool) arr_0 [i_1]);
                            var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_1] [i_3 + 2] [i_1 + 3] [i_0 - 1] [i_1])))), (((((/* implicit */_Bool) arr_7 [i_1] [i_3 - 1] [i_1 + 3] [i_0 + 3] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_3 - 1] [i_1 + 1] [i_0 + 4] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_3 + 1] [i_1 + 4] [i_0 + 1] [i_1]))))));
                            arr_14 [i_0] [i_1] [i_0 - 3] [i_0 + 3] [i_0 - 3] [i_0 + 2] = (signed char)29;
                            var_16 = ((/* implicit */long long int) (signed char)31);
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_17 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(var_0)))), (((unsigned short) (signed char)-29))));
                            arr_18 [i_0 - 1] [i_1] [i_0 - 2] [i_1] [5] = ((/* implicit */unsigned char) ((short) ((unsigned char) min((var_3), (((/* implicit */unsigned char) (_Bool)1))))));
                        }
                        var_17 = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((unsigned short) arr_2 [i_1] [i_0] [i_0 - 1])), (((/* implicit */unsigned short) arr_6 [i_0 + 2] [i_0] [i_0] [i_0 + 2]))))), ((~(((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
        }
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 2) 
        {
            var_19 = min((max((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (min((((/* implicit */unsigned int) (signed char)9)), (var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 753683649)) || (((/* implicit */_Bool) ((arr_19 [i_7 - 1]) ? (arr_0 [i_0]) : (((/* implicit */int) var_3)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (((((unsigned int) arr_8 [(unsigned short)7] [i_7] [7] [i_0 + 1])) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))))))))));
                arr_23 [i_0] [i_0] [i_8 + 1] [i_8] = ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 11; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((var_9) + (2147483647))) << (((((((/* implicit */int) (short)-22264)) + (22293))) - (29)))));
                            arr_29 [i_0] [i_8] [i_8] [(unsigned short)10] [i_10 - 1] = ((/* implicit */int) ((unsigned char) ((unsigned int) var_5)));
                        }
                    } 
                } 
            }
        }
        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            var_22 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((-753683649), (((/* implicit */int) var_0))))) ? (min((arr_16 [i_11] [i_11]), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (arr_25 [i_11]))) >> (((arr_27 [i_11] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) - (3498010063U))))))));
            var_23 ^= (-2147483647 - 1);
            var_24 = ((/* implicit */unsigned char) ((((min((var_1), (((/* implicit */unsigned long long int) -291159419)))) % (((/* implicit */unsigned long long int) ((unsigned int) var_6))))) >= (((/* implicit */unsigned long long int) min((min((var_4), (((/* implicit */unsigned int) (short)-32766)))), (((/* implicit */unsigned int) ((var_1) == (var_6)))))))));
            var_25 ^= ((/* implicit */signed char) ((((arr_3 [i_0 + 3] [i_0 - 3] [i_0]) << (((((/* implicit */int) var_5)) - (5977))))) == (arr_3 [i_0 + 3] [i_0 - 3] [i_0])));
        }
        var_26 ^= ((/* implicit */int) ((_Bool) ((max((var_1), (((/* implicit */unsigned long long int) var_5)))) == (var_6))));
    }
    for (unsigned char i_12 = 2; i_12 < 17; i_12 += 4) 
    {
        var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -100844984)) >= (arr_32 [i_12]))))))) ? (min((1916644328439980246LL), (((/* implicit */long long int) arr_33 [i_12 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_33 [i_12 + 2]))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) arr_33 [4U])), (arr_32 [i_12]))), (var_1))) < (max((arr_32 [i_12 - 2]), (var_6))))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            var_29 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_34 [i_13] [i_14 + 1])), (((((var_7) + (2147483647))) << (((9593865117929750203ULL) - (9593865117929750203ULL)))))))), (((unsigned int) min((var_4), (((/* implicit */unsigned int) (unsigned char)76)))))));
            var_30 = ((/* implicit */int) var_5);
            arr_40 [i_13] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_33 [i_13]) ? (((/* implicit */int) ((short) arr_35 [14U]))) : (((/* implicit */int) var_5))))) < (arr_32 [i_13])));
        }
        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_15]))))) > (((/* implicit */int) arr_41 [i_13] [(unsigned short)7] [i_13]))));
            var_32 *= ((/* implicit */unsigned int) arr_39 [i_13] [i_13]);
            var_33 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) >> (((262108245) - (262108231)))))))))));
            var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            var_35 = ((/* implicit */_Bool) min((((((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46686))))) ? (var_6) : (max((var_1), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min((((15) << (((((/* implicit */int) var_5)) - (5972))))), (-383774783))))));
        }
        var_36 = ((/* implicit */long long int) var_8);
    }
}
