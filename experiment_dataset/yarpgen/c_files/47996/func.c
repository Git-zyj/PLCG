/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47996
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1])))) ? (((/* implicit */int) ((short) min((0U), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */int) var_10))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) / (((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))));
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((1784382692462920562ULL) | (((/* implicit */unsigned long long int) 2485806681U))))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) (+(arr_6 [i_0] [(_Bool)1] [i_2 - 1])))) ? (-1) : ((+(((/* implicit */int) arr_5 [(signed char)19]))))))));
                }
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_3] [i_3 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)25652)) + (((/* implicit */int) (short)32767))))))) ? (((((/* implicit */_Bool) -10)) ? (((((/* implicit */int) (unsigned short)47210)) - (-10))) : ((+(5))))) : ((+(((((/* implicit */_Bool) var_3)) ? (5) : (((/* implicit */int) (unsigned short)42638))))))));
                    var_15 &= ((/* implicit */long long int) (+(min(((+(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (-8)))))));
                    var_16 = ((/* implicit */int) (unsigned char)72);
                    arr_12 [i_0] [20] [i_0] = ((/* implicit */unsigned char) (-(arr_1 [i_0])));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)20064))));
                                var_18 -= ((/* implicit */unsigned int) min((((long long int) (~(var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(-481933824)))) ? (((/* implicit */long long int) 1308157091)) : (((long long int) -3741407352794245222LL)))))));
                                var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)17)) <= (((/* implicit */int) arr_21 [i_7] [i_8] [i_7] [(short)4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5] [i_8] [i_7] [i_8])) ^ (((/* implicit */int) arr_21 [i_4] [i_4] [i_7] [i_8]))))) : (((var_7) - (((/* implicit */unsigned long long int) 1308157095))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_19 [i_4] [i_4] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))));
                    arr_27 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (short)0)) : (-1308157117))) / (((((/* implicit */int) (signed char)-7)) | (((/* implicit */int) (unsigned char)211))))));
                    var_22 = ((/* implicit */short) max((var_22), (((short) arr_8 [i_6] [i_5] [i_5] [i_4]))));
                }
            } 
        } 
    } 
}
