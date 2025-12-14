/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233469
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14101605447070276517ULL)) ? (((/* implicit */unsigned long long int) 3115342280U)) : (0ULL)));
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            arr_12 [i_2] [i_3] [i_2] = ((/* implicit */int) min((((((var_5) % (((/* implicit */unsigned long long int) arr_7 [i_2])))) & (arr_10 [i_3 - 1] [i_3 - 3] [i_3 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9903766655026051501ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 15ULL)) && (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) var_10)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3] [i_4]))) < (var_3)));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((12249600149720691447ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) / (arr_14 [i_3] [i_3 - 3] [i_3])));
                var_16 = ((/* implicit */long long int) (((_Bool)1) ? (1179625015U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25636)))));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_17 = ((/* implicit */short) arr_15 [i_2] [i_2] [i_5]);
            var_18 = ((/* implicit */long long int) (+((+(var_8)))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_19 = ((int) ((23ULL) - (((/* implicit */unsigned long long int) 4228340854U))));
            var_20 = ((/* implicit */unsigned long long int) ((((long long int) var_0)) * (((/* implicit */long long int) ((arr_19 [i_2] [i_6]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_11 [i_6])))))));
            arr_20 [i_2] [(unsigned short)12] [i_6] = ((/* implicit */int) var_10);
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */int) (unsigned short)51656)) : (((/* implicit */int) var_9))));
            arr_21 [i_6] [i_6] [i_2] = ((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-1))))) : ((~(((/* implicit */int) (_Bool)0)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    {
                        arr_30 [i_2] [(_Bool)1] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_11) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) : (var_8)))))) ? ((+(((long long int) arr_24 [i_9] [i_7] [i_2])))) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_8] [i_7] [i_2])))))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) 1179625015U))));
                        arr_31 [i_2] [i_7] [i_8] [i_8] = ((/* implicit */short) (-(9903766655026051492ULL)));
                    }
                } 
            } 
            arr_32 [i_2] [i_7] [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_12)))) << (((arr_10 [i_7] [i_2] [i_2]) / (var_0)))));
        }
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (10ULL)));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (signed char)63))))) - (((((/* implicit */_Bool) 67108863)) ? (((/* implicit */long long int) 221666272)) : (arr_18 [i_2] [i_2] [i_2])))));
    }
}
