/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230409
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
    var_16 = ((((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_7)) - (34)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-14290))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_2] [i_2] [i_4] = min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_15 [12ULL] [i_1 + 2] [i_1] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_4]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (-869463936))))));
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_14 [i_0] [(unsigned short)0] [i_0] [i_0 + 1])))) ? (var_4) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (var_3) : (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_1] [i_4]))) != (arr_4 [i_1] [i_1]))))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_1] = (unsigned short)18650;
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (637832304258151208ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1209329457)) ? (((/* implicit */int) (unsigned short)18650)) : (1209329440))))));
                var_18 = (-(((/* implicit */int) var_1)));
            }
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_1 + 4]), (arr_2 [i_0 + 1] [i_1 - 1]))))));
                            arr_31 [i_0] [i_1 + 4] [i_1] [3ULL] [i_0 + 1] [(unsigned char)12] [3ULL] = (unsigned short)46886;
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_5] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_6] [i_1 + 3]))) : (arr_4 [i_5] [i_5])))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_1 - 1] [i_1]))))) ? (((var_3) | (((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_34 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) (unsigned short)18669)) : (((/* implicit */int) (unsigned short)18663))));
            arr_35 [i_0] [(unsigned short)3] = ((/* implicit */unsigned long long int) (+(7)));
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)32640)), (max((((/* implicit */unsigned long long int) arr_27 [i_8])), (var_0)))))) ? (((/* implicit */int) arr_8 [18] [i_0 + 1] [i_8] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_8] [i_0])))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-((-(arr_32 [i_0 + 1] [i_0 + 1])))))));
            var_22 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_6 [i_8])))));
        }
        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 4; i_10 < 18; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (int i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        {
                            arr_49 [i_0] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */long long int) arr_47 [i_12] [(signed char)18] [(signed char)18] [i_9] [(signed char)18]);
                            arr_50 [6ULL] [6ULL] [i_10] [i_10] [i_10] [6ULL] [i_9] = ((((((/* implicit */_Bool) arr_4 [i_12] [i_10 - 2])) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 + 1] [i_0 + 1] [i_12])) ? (arr_32 [i_0 + 1] [i_10 - 1]) : (arr_4 [i_9] [i_10 + 1])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) (short)15);
            arr_51 [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_11))))));
            var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_11)))))));
        }
    }
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((int) (short)2047)))) % (((var_12) >> (((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)65))))) + (1057578555701694581LL)))))));
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
}
