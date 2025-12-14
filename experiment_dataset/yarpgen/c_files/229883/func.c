/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229883
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
    var_10 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) ((unsigned short) 1794885921))), (((((/* implicit */_Bool) -1794885922)) ? (var_2) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (unsigned short)14016)) : (((/* implicit */int) (unsigned short)65534))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1 - 3] [i_1 - 3] [21] [i_0 - 1])) ? (min((-187772003), (-865936389))) : (((((/* implicit */_Bool) var_2)) ? (min((arr_3 [i_0]), (((/* implicit */int) (unsigned short)14016)))) : (var_5)))));
                    arr_12 [i_1] = max((arr_3 [i_2 - 1]), (((/* implicit */int) ((2147483647) <= (-2071783057)))));
                }
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max(((!((!(((/* implicit */_Bool) arr_11 [i_1])))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) && (((/* implicit */_Bool) arr_10 [11LL] [(unsigned short)5] [(unsigned short)5])))))))));
                var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)19642))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)20883)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_1 - 3])))));
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4])) ? (arr_8 [i_0] [19] [i_4]) : (((/* implicit */long long int) (-(-2071783062)))))), (((((/* implicit */_Bool) (unsigned short)14016)) ? (arr_5 [i_1] [i_4]) : (arr_5 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((1794885921) & (((/* implicit */int) (short)20883))))) == (arr_13 [i_0] [i_1 - 2] [i_6])))) : (max((((((/* implicit */_Bool) (unsigned short)20467)) ? (((/* implicit */int) (unsigned short)14016)) : (((/* implicit */int) (unsigned short)22183)))), (((((/* implicit */_Bool) 0)) ? (var_8) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1]))))))));
                            var_17 = ((/* implicit */int) (unsigned short)33992);
                        }
                    } 
                } 
                arr_20 [i_1] [i_0 - 1] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_9)), (var_5))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)58425)) : (((/* implicit */int) (unsigned short)38816))))))) ? (((/* implicit */int) arr_18 [i_0] [(unsigned char)22] [i_1 - 3] [i_0])) : (((((/* implicit */_Bool) max((arr_8 [i_0] [i_1 - 1] [i_4]), (((/* implicit */long long int) (short)-18770))))) ? (-1717263150) : (((/* implicit */int) (short)-28673))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32224))))) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_4] [i_0] [i_7])))))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_0 + 1] [i_0 + 1] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */int) (unsigned short)8849)) & (arr_15 [23U] [i_0 - 2] [i_4] [i_7]))) + (var_5))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((long long int) (~(min((arr_23 [i_0] [i_1] [i_4] [(unsigned short)8] [i_8 + 3]), (arr_15 [i_0] [i_0 - 2] [i_0] [i_0])))))))));
                        arr_26 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)27608)) & (((/* implicit */int) ((-1) == (((/* implicit */int) (unsigned short)59508))))))), (min((((/* implicit */int) (unsigned char)238)), (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_7] [i_8])) ? (535822336) : (arr_14 [i_1] [i_4] [i_1])))))));
                        var_21 = ((/* implicit */short) arr_16 [i_0]);
                        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25862))) : (min((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_1])), (0LL))))), (((/* implicit */long long int) min((max((((/* implicit */unsigned short) (unsigned char)82)), ((unsigned short)27448))), (((/* implicit */unsigned short) arr_10 [i_0] [i_0 + 1] [i_1 - 2])))))));
                    }
                }
            }
            for (int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_34 [i_11 - 1] [i_10] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) min((max((((/* implicit */int) arr_19 [i_11 + 1] [i_1] [i_1])), (((((/* implicit */_Bool) (short)32736)) ? (((/* implicit */int) (unsigned short)0)) : (129588707))))), ((+(max((0), (((/* implicit */int) (signed char)-85))))))));
                            arr_35 [24U] [i_1] [i_1] = min((((/* implicit */short) arr_16 [i_11 - 1])), (min((((/* implicit */short) (signed char)-117)), ((short)29787))));
                            var_23 *= ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)255)), (-465878467)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_9] [i_9]);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_33 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 2]))));
                arr_36 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */int) ((-1662698869) == (-1735463423)))) : (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) != (arr_24 [i_9] [i_1] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)55681))))));
            }
            for (int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (-(min((((((/* implicit */_Bool) (unsigned short)39655)) ? (arr_8 [i_0] [i_0] [(unsigned short)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))))))));
                var_27 = ((/* implicit */int) (unsigned short)59508);
            }
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) arr_40 [i_0 - 2] [i_0 - 1] [i_0]);
                        var_29 &= ((/* implicit */short) arr_4 [i_0] [i_0] [i_13]);
                        var_30 -= ((/* implicit */int) ((signed char) 599367614));
                    }
                } 
            } 
            var_31 -= ((/* implicit */unsigned int) max((arr_15 [i_0] [9] [9] [i_1 - 2]), (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0]))));
            arr_48 [i_1] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))))));
        }
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    {
                        arr_57 [i_15] [i_15] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)718), (((/* implicit */unsigned short) (signed char)-1))))) ? (var_8) : (((/* implicit */int) (unsigned short)17165))))) ? (((/* implicit */int) (unsigned short)25881)) : ((~(((/* implicit */int) arr_30 [i_0] [i_15] [i_15] [i_15])))));
                        var_32 ^= min((((/* implicit */int) arr_46 [i_0 - 2] [i_15] [i_16] [i_17])), (arr_51 [i_17]));
                    }
                } 
            } 
        } 
        arr_58 [i_0] [19LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11970))))) ? (((/* implicit */int) (signed char)-1)) : (((int) max((arr_53 [i_0] [i_0] [i_0 + 1] [i_0]), (var_9))))));
    }
}
