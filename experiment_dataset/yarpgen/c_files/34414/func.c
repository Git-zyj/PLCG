/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34414
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
    var_19 -= ((/* implicit */unsigned char) ((max((min((var_11), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_4))))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_15)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_7) : (((/* implicit */long long int) arr_3 [i_0] [i_1])))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((unsigned long long int) (signed char)-6)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) 4067254208759311713LL))), (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_10);
    var_23 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1507595916U))));
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_5 [i_2]))));
                            arr_19 [i_3] [(unsigned char)9] [i_3] [i_3] [i_3] [15LL] = ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 3])) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_17 [1] [i_5] [i_3]))) ? (((/* implicit */int) arr_6 [i_2])) : (((((/* implicit */_Bool) var_16)) ? (arr_5 [i_3]) : (((/* implicit */int) var_14))))));
                            var_27 = ((/* implicit */unsigned char) (-(arr_7 [i_2])));
                        }
                    } 
                } 
            } 
            var_28 = ((_Bool) ((((/* implicit */_Bool) -965795002)) ? (((/* implicit */int) (unsigned short)57906)) : (((/* implicit */int) (_Bool)1))));
            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
        }
        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            var_30 = ((/* implicit */long long int) var_4);
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_7] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_7 + 1])), (var_10)))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) (-(((arr_22 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((-3742299413632434815LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_34 = ((/* implicit */short) arr_16 [i_9 - 1] [i_9 + 1] [i_9 + 1]);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 2; i_11 < 24; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-117))))), (((signed char) arr_15 [i_2] [i_8] [i_9 + 1] [i_10] [i_11]))));
                            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)8524))));
                            var_37 = ((/* implicit */_Bool) min((4058546612U), (((/* implicit */unsigned int) ((arr_7 [i_11]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43356)) ? (((/* implicit */int) arr_27 [i_2] [(signed char)20] [1] [i_9] [i_10] [(signed char)20])) : (((/* implicit */int) arr_18 [i_11] [17] [i_10] [i_9] [i_8] [i_2]))))))))));
                        }
                        for (unsigned int i_12 = 4; i_12 < 22; i_12 += 1) 
                        {
                            var_38 = ((((/* implicit */_Bool) arr_31 [i_2] [24ULL] [i_2] [i_9] [i_12] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min(((unsigned short)57919), ((unsigned short)5690)))))) : (var_17));
                            var_39 = ((/* implicit */_Bool) ((((((/* implicit */int) ((arr_28 [i_2] [i_8] [i_9] [i_10] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) > (((((/* implicit */int) arr_8 [i_2])) & (((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9 + 1] [i_9 + 1] [i_9])) ? (arr_25 [9ULL] [i_9 + 1] [i_9 - 1] [i_9]) : (((/* implicit */int) (unsigned short)8524))))) : (min((arr_28 [i_2] [23] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            var_40 = (~(((((/* implicit */_Bool) min((arr_26 [i_9 - 1] [i_10] [i_12]), (((/* implicit */short) (signed char)-117))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_12] [i_9]) : (arr_31 [i_2] [i_2] [i_9] [i_9] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)57900))))))));
                            var_41 = ((/* implicit */unsigned short) min((2787371380U), (((/* implicit */unsigned int) (unsigned short)44684))));
                        }
                        arr_32 [i_9] [i_8] [3] = ((/* implicit */unsigned char) arr_18 [i_2] [i_2] [i_8] [i_9 - 1] [i_9] [i_10]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_13 = 4; i_13 < 22; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) arr_17 [i_2] [(unsigned short)3] [i_2]);
                            var_43 = ((/* implicit */unsigned int) arr_33 [i_2] [i_2] [i_13] [i_15]);
                            arr_40 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) (signed char)116);
                            arr_41 [i_2] [i_13] [i_15] = ((/* implicit */long long int) arr_35 [i_2] [i_8] [i_8] [(signed char)19] [(_Bool)1]);
                            arr_42 [i_2] [i_8] [i_13 - 4] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)58)) && ((_Bool)1)))) % (((/* implicit */int) arr_15 [(signed char)17] [i_14] [i_13] [i_2] [i_2]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_44 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) min((arr_26 [i_2] [i_2] [i_2]), (((/* implicit */short) (_Bool)1)))))))), (((((((-5544612013598840971LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_2])) + (14150))))) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    var_45 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((4399061367309966412LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))) / (((/* implicit */int) ((unsigned char) arr_31 [i_2] [i_2] [i_16] [i_17] [i_16] [(_Bool)1]))))), (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_17]))) >= (arr_7 [i_2]))))))));
                }
            } 
        } 
    }
}
