/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40407
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
    var_14 |= ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-108)), (arr_2 [16U] [i_0])))) - (65428)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)244)))) : (((((arr_3 [i_0 + 1] [i_0]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -237859875)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32767)), (max(((unsigned short)1019), (((/* implicit */unsigned short) (signed char)-32))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)17555)) % (arr_3 [i_2] [i_2]))))))) : (((/* implicit */int) ((signed char) (short)-4642)))));
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 127U)) ? ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33189))) : (4705025689386126337LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)64)))))));
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_3] [(signed char)15]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_10)), (((long long int) var_6)))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [(signed char)15])))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_18 [i_0] [i_4] [i_0 - 2] [(signed char)18] [i_0]))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((arr_0 [i_1 + 2]), (max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 3]))))))));
                                arr_19 [i_4] [i_0] [(signed char)9] [1U] [(short)18] = ((/* implicit */unsigned short) -9201070496950453070LL);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) arr_17 [(unsigned short)17] [i_0] [(unsigned short)10] [(_Bool)1] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(var_10)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
