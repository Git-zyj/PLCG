/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191810
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
    var_14 = ((/* implicit */unsigned int) ((_Bool) var_6));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) || (((/* implicit */_Bool) var_13))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) -264188266)))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_18 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) var_1)))), (((unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_2))))));
                        var_16 ^= ((unsigned short) var_10);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_17 = ((max((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_4))))), (var_12))) < (((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4))))))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_6);
                        }
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_4))), (max((((/* implicit */unsigned int) var_12)), (var_2)))));
                    }
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((signed char) var_10)))) && (((_Bool) var_3))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_29 [i_7] = ((/* implicit */signed char) ((int) var_2));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0)))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_9))));
            arr_30 [i_7] [i_7] = ((/* implicit */long long int) var_4);
            arr_31 [i_7] [i_7] = ((/* implicit */unsigned int) ((int) var_12));
        }
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) ((long long int) max((((/* implicit */unsigned int) var_1)), (var_11))));
                        arr_42 [i_6] [i_9] [i_6] [i_9] = ((/* implicit */_Bool) var_12);
                        arr_43 [i_6] [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
        arr_44 [i_6] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((int) var_11))), (((long long int) var_10)))) > (((/* implicit */long long int) ((var_13) & (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_2))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_4))));
    }
    var_22 -= ((/* implicit */int) ((long long int) ((int) max((var_5), (((/* implicit */short) var_1))))));
    var_23 = ((/* implicit */unsigned int) var_1);
}
