/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28617
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) max(((((-(2162847185U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((354375395180979663ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) 354375395180979663ULL);
            var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((int) arr_4 [i_0] [i_0])), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), ((unsigned short)60403))))))), ((~(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))) : (arr_0 [i_0])))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_2]);
                var_13 = ((((/* implicit */_Bool) ((signed char) -1LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(var_1))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) != (((/* implicit */int) var_8))))) % (((/* implicit */int) (short)408)))));
                arr_13 [i_0] [i_2] [i_3] [i_0] = var_1;
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_14 -= ((/* implicit */_Bool) var_11);
                var_15 = ((/* implicit */long long int) ((unsigned char) ((_Bool) arr_7 [i_2])));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [(unsigned short)4] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (7176666903067864939LL))))));
                arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5])) ? (arr_17 [i_0] [i_0] [i_5]) : (var_2))));
                var_16 = ((/* implicit */unsigned int) (+(22LL)));
            }
            arr_21 [i_0] [i_2] [i_2] = ((((/* implicit */int) (signed char)-95)) != (((((/* implicit */_Bool) 2705653889930935773ULL)) ? (((/* implicit */int) (unsigned short)38632)) : (((/* implicit */int) (unsigned char)215)))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)10] [(unsigned short)10]))) > (var_11)))))));
            var_18 += ((12324609453592355497ULL) - (((/* implicit */unsigned long long int) arr_22 [i_0])));
        }
    }
    var_19 = ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_6))))))) & (max((((/* implicit */unsigned long long int) 19U)), (15574698821222478296ULL))))), (((/* implicit */unsigned long long int) ((long long int) var_4)))));
}
