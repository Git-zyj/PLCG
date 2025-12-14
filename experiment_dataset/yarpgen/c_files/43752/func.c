/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43752
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [(short)15] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((min((21ULL), (((/* implicit */unsigned long long int) (unsigned char)33)))) != (((/* implicit */unsigned long long int) arr_1 [i_0]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [(unsigned char)6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10710)))))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-10710)) > (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
        var_19 &= ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_3)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_5) ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((-3749852642831281276LL) & (var_1))), ((~(var_15)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4730513349400973295LL)))) | (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (0ULL)))));
                            arr_18 [i_6] [i_3] [i_4] [i_5] [3ULL] = ((/* implicit */short) arr_15 [i_2] [i_3] [i_4 - 1] [i_5] [i_6 + 2]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_23 += max((((short) min((3621330641U), (((/* implicit */unsigned int) var_4))))), (((/* implicit */short) (_Bool)1)));
                        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8 + 2])) ? (((/* implicit */int) arr_6 [i_8 - 1])) : (((/* implicit */int) arr_6 [i_8 - 1])))));
                        var_25 = ((/* implicit */long long int) ((short) 11446199777864436156ULL));
                        arr_24 [1ULL] [i_3] [10ULL] [i_7] = ((/* implicit */unsigned int) max((max((((/* implicit */short) (unsigned char)112)), (arr_14 [i_8 - 1] [i_8 + 2] [i_8 + 4] [i_8 + 2]))), (((/* implicit */short) (!(((/* implicit */_Bool) 2926663490934169641LL)))))));
                        arr_25 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */short) (signed char)-26);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(var_15))))));
                /* LoopSeq 2 */
                for (signed char i_10 = 3; i_10 < 15; i_10 += 4) 
                {
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)31794)))))))));
                    arr_32 [i_10] [i_2] [i_3] [i_9] [i_9] [i_10 + 1] = ((/* implicit */long long int) max((((unsigned short) (-(var_7)))), (((/* implicit */unsigned short) (short)-17648))));
                    arr_33 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_23 [i_10] [i_10 - 2] [i_10 - 3] [i_10 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10]))))))));
                }
                for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)764)) ? (((/* implicit */int) arr_28 [i_12] [i_11] [i_9] [i_3] [i_2])) : (((/* implicit */int) (signed char)-125)))))))));
                        var_29 &= ((((/* implicit */_Bool) arr_35 [7U])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27715))))) : ((~((-(var_14))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_30 = min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) max((-3749852642831281276LL), (((/* implicit */long long int) (short)0)))))))), (min((((unsigned long long int) var_8)), (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        arr_41 [i_3] [i_9] [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)25714))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        arr_44 [i_2] [i_2] [i_2] [i_14] [(short)2] [i_11] [(short)2] = ((/* implicit */unsigned long long int) (-(-939568778)));
                        var_31 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)15388)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)109)))) * (((/* implicit */int) (unsigned short)37832))));
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((((/* implicit */signed char) var_0)), (var_4))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_31 [i_3] [i_11]))))) : (9053676702560523499ULL))))));
                    var_33 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)180))))) ? (((((426949059U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 939568777)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (short)10709))))));
                }
                var_34 = ((/* implicit */unsigned short) ((signed char) (short)-10710));
            }
            var_35 ^= ((/* implicit */short) (+(((((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_11)))) - (max((((/* implicit */long long int) var_17)), (arr_13 [i_2] [i_2] [i_2] [i_2])))))));
        }
        var_36 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)36401), (((/* implicit */unsigned short) (unsigned char)247)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((short) var_4)))))));
    }
    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            var_37 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_16] [i_16]))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_37 [i_15] [14U] [14U] [i_15] [14U] [14U]))))));
            var_38 &= ((/* implicit */unsigned short) ((-3409007358038356130LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))));
            var_39 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) ((int) (unsigned short)37832))) % (((((/* implicit */_Bool) 16200494282485520546ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32945))) : (10364364301005026161ULL))))));
        }
        arr_52 [i_15] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((var_18) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15388)))))))), (((((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_15] [i_15]))))) + (max((((/* implicit */long long int) (unsigned char)225)), (-3409007358038356130LL)))))));
    }
    var_40 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((long long int) var_9))))));
    var_41 = ((/* implicit */short) var_18);
}
