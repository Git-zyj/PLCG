/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230593
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
    var_10 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((unsigned char) var_9))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_4))))))));
    var_11 = ((/* implicit */short) var_9);
    var_12 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_3)))));
    var_13 = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_3)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_0] [(signed char)17] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_2))))) : (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)7] [i_1] [i_2] [i_2]))))))))))));
                    var_17 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_18 = ((/* implicit */signed char) var_2);
        var_19 |= ((/* implicit */signed char) arr_7 [i_3] [i_3]);
        var_20 = ((/* implicit */unsigned char) (+(arr_4 [i_3] [(signed char)1])));
        var_21 = ((((/* implicit */_Bool) (unsigned char)100)) || (((/* implicit */_Bool) 513461961649700318LL)));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_4]))));
                        arr_20 [14ULL] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_19 [i_4] [i_5] [i_5] [i_7]))));
                        var_23 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                        var_24 = (-(arr_16 [i_4] [i_5] [i_6]));
                        arr_21 [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_0);
                    }
                } 
            } 
        } 
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((int) (signed char)-57));
        var_25 = ((/* implicit */unsigned short) ((arr_11 [i_4] [i_4]) / (((arr_13 [i_4] [i_4] [i_4]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    }
}
