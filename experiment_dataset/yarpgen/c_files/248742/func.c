/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248742
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
    var_15 *= ((/* implicit */short) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_13))));
    var_16 = 3398355993339920285ULL;
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 15048388080369631331ULL)) ? (3398355993339920284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) <= (36028797018931200ULL))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 15048388080369631330ULL);
            var_18 = ((/* implicit */short) (signed char)-83);
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_4 [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) != (17441847229824627515ULL)));
                var_21 = (signed char)-53;
            }
            for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) (short)26697);
                var_23 = ((/* implicit */signed char) arr_1 [i_0]);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) (short)26697)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1])))))));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) : (((((/* implicit */_Bool) (signed char)83)) ? (13378720326159717786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))));
            }
        }
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (unsigned short)5859)), (15048388080369631331ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)2809)) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) <= (((/* implicit */int) (unsigned short)3582)))))));
    }
}
