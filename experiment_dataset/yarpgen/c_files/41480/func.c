/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41480
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
    var_12 ^= ((/* implicit */int) var_10);
    var_13 = ((/* implicit */unsigned char) (-(-169973239)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) & ((~(var_10)))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_14 -= ((/* implicit */signed char) ((517095736809798350LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))));
            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) var_10)))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_16 = ((/* implicit */signed char) var_7);
            var_17 = ((/* implicit */int) ((arr_3 [i_0] [i_0] [(unsigned char)2]) ^ (arr_3 [i_0] [i_0] [i_0])));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) 169973251));
        }
        for (int i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (~(min(((+(var_3))), (((/* implicit */long long int) max((arr_5 [i_4]), (var_11))))))));
                        var_19 |= ((/* implicit */long long int) ((unsigned int) var_10));
                        var_20 = ((/* implicit */unsigned short) arr_5 [i_5]);
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) max((max((((/* implicit */unsigned long long int) arr_13 [(unsigned short)23])), (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) var_2);
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_23 = ((/* implicit */short) (-(6285401608511112808LL)));
                var_24 = ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) : (-1LL));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned short)47406))) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) var_9)))))));
            }
            for (long long int i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) (unsigned short)18118);
                arr_21 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) ^ (arr_3 [i_7 + 1] [20ULL] [(signed char)18])))), (((unsigned long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9)))))));
            }
            /* vectorizable */
            for (long long int i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
            {
                arr_25 [i_0] [5U] [i_3] [20] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_3 - 1])) | (((/* implicit */int) arr_1 [i_0]))))));
                arr_26 [i_0] [(_Bool)1] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (arr_14 [i_3] [i_8]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8 - 1] [i_3 - 1] [i_0])))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_0] [i_0] [i_0]))) > (var_2))))));
            }
        }
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((+((+(var_10))))))))));
    }
    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-104)), (var_1))) > (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8))))))));
}
