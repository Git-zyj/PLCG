/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245384
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
    var_15 = ((/* implicit */unsigned char) var_13);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_4);
                    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_3)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)32767)) && (((/* implicit */_Bool) (unsigned short)32785))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32780))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_3])), (var_9)))) : (((arr_14 [i_7 - 1] [(_Bool)1] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (584263860))))));
                                arr_20 [i_3] = ((/* implicit */unsigned short) var_6);
                                arr_21 [(signed char)9] [i_3] [i_5] [i_6] [i_6] [i_4] [(unsigned char)1] = ((/* implicit */unsigned short) var_6);
                                var_19 = ((((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) (unsigned short)32767))))))) | ((~(((((/* implicit */long long int) -230978233)) ^ (6341296258307711367LL))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_14)), (var_9))) % (((/* implicit */int) (unsigned short)32768))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) % (2601790398U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [10U] [i_4] [i_5] [(short)9] [i_3]))))))));
                }
            } 
        } 
    } 
}
