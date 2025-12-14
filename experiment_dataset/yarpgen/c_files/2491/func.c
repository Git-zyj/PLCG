/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2491
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))) != (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_4))))))) < (var_4)));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((+(var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2U] [i_2 - 1])))))))))));
                    arr_9 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))), (var_14)))), (arr_6 [i_0] [i_1])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_21 = ((/* implicit */int) arr_11 [i_0] [(unsigned char)3]);
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) var_16))) < (7LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_18 [i_0] [i_0])), ((signed char)113))))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_5 - 2] [i_4] [i_0] [i_5 - 2]);
                            var_23 = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */short) min((arr_18 [i_0] [i_0]), (((((/* implicit */int) min((var_14), (arr_4 [i_0] [i_0] [i_0])))) == (((/* implicit */int) (_Bool)1))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned int) ((8648292961402321258ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                arr_30 [i_8] [i_8] [i_8] = ((/* implicit */int) var_14);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_38 [i_7] [(signed char)19] [15U] [i_8] [i_11] = (+(((/* implicit */int) var_17)));
                            var_25 = ((/* implicit */short) 8648292961402321264ULL);
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) (+((+(var_5)))));
            }
            arr_39 [i_8] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_7] [i_8])) | (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_7])) - (((/* implicit */int) (signed char)103))))) > (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_8] [(unsigned short)0] [i_8] [(_Bool)1] [i_7]))))))))));
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((9798451112307230357ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6)))))))))))));
        var_28 = ((/* implicit */unsigned short) ((((arr_0 [i_7] [i_7]) % (((/* implicit */long long int) ((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7] [i_7] [(short)16])))));
    }
    var_29 = ((/* implicit */unsigned int) var_18);
}
