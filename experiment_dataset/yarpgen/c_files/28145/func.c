/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28145
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) (unsigned char)255);
                arr_5 [4] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1441679983)))))) > ((~(9223372036854775807LL)))));
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_2]))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) (signed char)-1);
                        var_22 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) (signed char)1))))) >= (((/* implicit */int) (signed char)-124))))) + (((/* implicit */int) arr_12 [i_2] [i_4] [i_2])));
                        var_23 *= ((/* implicit */unsigned char) 8387640194222721124LL);
                        var_24 -= ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)1)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((max((7789753942118813099LL), (((/* implicit */long long int) (signed char)-32)))) << (((1892596952U) - (1892596952U))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_18 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (signed char)-15))) >> (((max((8387640194222721124LL), (((/* implicit */long long int) arr_3 [i_2] [i_6])))) - (8387640194222721102LL)))))) > ((-(min((353704687147385685ULL), (((/* implicit */unsigned long long int) 1600209398U))))))));
                        var_26 &= ((/* implicit */int) max(((short)-25022), (((/* implicit */short) (signed char)98))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((/* implicit */signed char) max((31222340U), (((/* implicit */unsigned int) (unsigned char)0))));
                    }
                    arr_19 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (signed char)-1);
                    arr_20 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
    } 
}
