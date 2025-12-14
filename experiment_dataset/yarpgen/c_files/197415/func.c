/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197415
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
    var_15 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned char) ((int) arr_2 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_1] [6] [0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */int) (unsigned short)40037);
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_0] [6ULL] = ((/* implicit */unsigned short) max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (signed char)-105))))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_19 [i_0] = ((/* implicit */long long int) var_11);
                            var_17 = ((((/* implicit */_Bool) (unsigned short)25485)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) max(((signed char)60), ((signed char)105)))))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned short)25490)))), (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            arr_20 [i_4] [i_0] [i_0] [(short)12] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (unsigned short)25485)), (((((/* implicit */_Bool) (signed char)105)) ? (var_3) : (var_1)))))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((min((max((var_4), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(var_3)))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((var_8) * (((/* implicit */unsigned long long int) 4245816832U)))))))))));
                            var_19 -= ((/* implicit */int) -22LL);
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)12] [i_3] [i_0 + 1])) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_2] [0] [i_4 - 2] [i_6] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-113))))));
                            arr_24 [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_4);
                            var_20 = ((/* implicit */long long int) (-(((unsigned long long int) arr_16 [i_0] [i_4 + 2] [i_3 + 1]))));
                        }
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned short i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (3600014266999790395ULL) : (((/* implicit */unsigned long long int) arr_30 [i_0] [i_9] [i_10])))))), ((~((~(var_10)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)102)), (3139542160U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) arr_5 [i_10 - 2])) ? (var_10) : (var_3)))));
                        }
                    } 
                } 
            } 
            arr_38 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_28 [i_0]), (arr_28 [i_0])))) * (var_7)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_24 += ((/* implicit */signed char) (~(8LL)));
                    arr_44 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_17 [i_0] [i_7] [i_0 - 1]));
                    var_25 = ((/* implicit */short) var_0);
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    var_26 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_7] [i_7] [i_11 + 2]))));
                    arr_47 [i_0] [i_7] = (~(arr_35 [i_11 + 2] [i_11] [i_11 + 2] [i_0] [i_13] [i_11]));
                    var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) 7825086751212890669LL)) ? (27) : (((/* implicit */int) (unsigned short)40066))));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned short)32950))));
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    arr_52 [i_0] [i_0] [i_11] [i_14] [i_11] [i_14] = -194843446771615527LL;
                    var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 26LL)) : (var_6)));
                    arr_53 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 33LL));
                }
                arr_54 [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4540794057528110260LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_11 + 2] [i_11 + 1] [i_0])))));
                var_30 = ((/* implicit */_Bool) (signed char)-105);
            }
            arr_55 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16380)) ? (((/* implicit */int) (unsigned short)40037)) : (7)));
        }
        arr_56 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17))))) : (((long long int) (unsigned char)133))))) ? ((-(arr_1 [i_0] [i_0 + 1]))) : (((/* implicit */long long int) var_1))));
        arr_57 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) 56779205)) : (((((/* implicit */_Bool) (signed char)-97)) ? (arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (arr_35 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])))));
    }
}
