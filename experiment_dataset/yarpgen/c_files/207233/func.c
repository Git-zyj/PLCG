/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207233
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
    var_15 &= ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6068683846202836622LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (-6068683846202836622LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6] [i_0 - 2])) ? ((-(((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [i_0 - 1])))))) : (((unsigned long long int) arr_0 [i_0 - 2] [i_0 + 1]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) (~(arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_4])))) ? (((/* implicit */long long int) ((unsigned int) (-(arr_5 [i_2]))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (6068683846202836616LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6068683846202836621LL)))))))));
                        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_15 [(_Bool)1] [(_Bool)1] [i_3] [(short)0])), (arr_7 [20ULL] [i_4])))))))) : ((((!(((/* implicit */_Bool) 15952640628510404970ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_1])) % (arr_3 [i_3])))) : ((-(arr_5 [i_4])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_9 [i_1] [i_2] [i_5])))))) || (((/* implicit */_Bool) arr_7 [i_1] [i_1])))))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(((/* implicit */int) (signed char)-96)))) : (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_5])))))))));
            }
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_2] [i_8] [i_7] [i_8]))));
                            var_22 = ((/* implicit */unsigned char) ((unsigned short) ((int) arr_15 [i_1] [i_2] [i_6] [i_7])));
                        }
                    } 
                } 
                arr_27 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_14 [i_6] [i_6] [0LL] [i_2] [i_1] [i_1])))))))) != (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (1292518625)))) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_6])))))));
            }
            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) 1393431276U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20295))) : (-6068683846202836622LL))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1292518633))))))));
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))))))));
    }
}
