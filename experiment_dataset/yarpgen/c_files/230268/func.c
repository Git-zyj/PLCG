/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230268
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
    var_16 = ((long long int) min(((-(((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_8 [2LL] [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (max((((-5287231356068719083LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)206)) ? (187277009U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) min(((short)-16041), (((/* implicit */short) (_Bool)1))))) : ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_3])))))) + (16059)))));
                            var_18 *= ((/* implicit */_Bool) ((unsigned char) min((3840U), (((/* implicit */unsigned int) (short)8374)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */_Bool) min((-5346903082988650183LL), (((/* implicit */long long int) ((unsigned int) ((long long int) 3880152359298075691ULL))))));
                            arr_18 [(unsigned char)0] [(unsigned char)0] [i_1] [i_4] [i_5] = ((((/* implicit */long long int) 2768495589U)) & (((((/* implicit */_Bool) 1715413417608451232LL)) ? (((((/* implicit */_Bool) -750419743083799963LL)) ? (arr_13 [i_0] [i_0] [i_0]) : (4611686018427387872LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)248)) ? (234899519U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2827)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 2; i_6 < 21; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                arr_25 [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-16384))));
                var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 43172067U)) ? (((/* implicit */int) ((unsigned char) 492581209243648LL))) : (((/* implicit */int) (short)510)))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) min((((2269938575009438317LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (arr_31 [(_Bool)1] [i_8] [(_Bool)1] [i_6 + 3])))) && ((_Bool)1)));
                            var_22 = ((/* implicit */unsigned long long int) min((137430564864LL), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
                arr_32 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036787666944LL)))))))) ? (min((min((4056528829347518738LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max(((unsigned char)32), (((/* implicit */unsigned char) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7])))));
            }
        } 
    } 
}
