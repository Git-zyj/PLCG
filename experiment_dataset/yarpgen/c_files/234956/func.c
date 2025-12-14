/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234956
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_3 [(short)4] = ((14179103U) >> (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (8864769121560894544ULL))), (((/* implicit */unsigned long long int) min(((signed char)-30), (var_4)))))) - (18446744073709551560ULL))));
        var_10 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) << (((((/* implicit */int) var_4)) + (67)))))) ? (max((4280788187U), (14179103U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32760)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (unsigned short)6093);
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (short)15162)))) : (min((var_3), (((/* implicit */int) (short)-32760))))))), (max((((/* implicit */long long int) (unsigned short)46005)), (var_0)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_2] [(short)0] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) || (((/* implicit */_Bool) (short)-5724))));
                                arr_19 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_3 + 1] [i_1] [i_5] = ((/* implicit */int) arr_6 [i_1] [i_3 + 1]);
                                var_11 += arr_2 [i_5];
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46021)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30780))) : (var_2)))) ? (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_4] [i_3] [i_4]))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (14179107U))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        arr_24 [i_1] [8ULL] [i_1] [i_1] [(short)0] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1] [i_3 + 1] [i_6] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))) : (arr_12 [i_3 + 1] [i_3] [i_3] [(unsigned short)2])));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            arr_28 [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32763))));
                            arr_29 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7 - 1])) ? (arr_9 [i_7 - 1]) : (((/* implicit */long long int) var_2))));
                            arr_30 [i_1] [i_1] [i_1] [i_6] [i_7 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            var_13 += ((/* implicit */signed char) ((unsigned int) arr_1 [i_3 + 1]));
                            arr_35 [i_1] [i_2] [i_2] [i_3 + 1] [i_6] [3ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_1] [i_2] [(signed char)0] [(signed char)0] [i_1])) ? (((/* implicit */int) (unsigned short)19538)) : (((/* implicit */int) arr_17 [i_1]))))));
                            var_14 &= ((/* implicit */int) ((unsigned int) arr_13 [i_8 - 1] [i_3 - 1] [i_3] [i_1 - 3]));
                        }
                    }
                    arr_36 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32739)) ? (((/* implicit */unsigned long long int) 14179103U)) : (var_5)))));
                }
            } 
        } 
        arr_37 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (62698171) : (((/* implicit */int) (short)32747)))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_1] [4U] [i_1])) ? (((/* implicit */unsigned long long int) -129638245)) : (arr_7 [i_1 - 2])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_16 += (~(((/* implicit */int) (unsigned short)46007)));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                {
                    var_17 &= ((/* implicit */short) ((_Bool) arr_44 [i_10] [i_9]));
                    var_18 = (+(((/* implicit */int) (_Bool)1)));
                    var_19 += ((/* implicit */unsigned long long int) (unsigned short)55559);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        var_20 += ((/* implicit */unsigned int) arr_52 [i_9] [i_12] [(signed char)20] [i_9]);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_46 [i_13] [i_12] [i_12]) << (((((/* implicit */int) arr_47 [i_9] [i_9])) - (59)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_9] [i_12] [i_13])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29130))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)32747)) > (((/* implicit */int) (signed char)120))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        arr_56 [i_15] [i_15] = ((/* implicit */short) (-(((int) (unsigned short)47967))));
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -62698171)) ? (arr_46 [i_15] [(short)4] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >= (((((/* implicit */int) arr_59 [i_15])) % (((/* implicit */int) arr_42 [i_15] [i_15]))))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1810192214U)))) ? (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) arr_42 [i_15] [i_15])) : (((/* implicit */int) arr_53 [i_15] [i_16] [i_17] [i_17] [i_17])))) : ((+(((/* implicit */int) var_6))))));
                    arr_61 [i_17] = ((/* implicit */signed char) (-(var_5)));
                }
            } 
        } 
    }
}
