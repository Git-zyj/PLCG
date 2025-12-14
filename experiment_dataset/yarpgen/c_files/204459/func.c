/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204459
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))))) || (((/* implicit */_Bool) ((int) 13875542919523671153ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_4])) : (((/* implicit */int) arr_1 [i_3])))))));
                            var_14 = ((/* implicit */unsigned int) arr_4 [i_0]);
                        }
                        arr_15 [i_0] [(_Bool)1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_2] [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3] [i_1 + 2]));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 781463858646225907ULL)) ? (((/* implicit */int) ((unsigned char) 4571201154185880462ULL))) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1]))));
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 + 3] [i_2] [i_5] [i_0] [i_1 - 3])) && (((/* implicit */_Bool) arr_6 [i_3] [9LL] [i_0]))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (arr_9 [i_1 - 1] [i_2 + 3] [i_5 + 2]))))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_23 [i_2 - 1] [i_1 - 3] [i_2] [i_2 - 1] [i_2 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) > (arr_22 [i_1] [i_0] [i_1 + 1] [i_1] [i_1] [i_6] [i_6])))))));
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_2] [i_1 + 2] [i_1 - 1] [(_Bool)1] [i_2 + 2] [i_2] [i_2 + 1]));
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)22))));
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((1068632438U) << (((((/* implicit */int) (signed char)-60)) + (91)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7]))) < (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [8ULL] [i_7]))));
        arr_30 [i_7] = ((/* implicit */signed char) arr_10 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_7]);
    }
    var_19 = ((/* implicit */unsigned int) ((var_8) ^ (12433897821642924966ULL)));
}
