/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214162
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)6480)) / (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 483799641)) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)2]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20)))) : (var_8))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) << (((arr_1 [i_0]) - (3214003523237988432ULL)))))));
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
        var_22 = ((((/* implicit */_Bool) max((arr_1 [i_0]), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (3130158993219155797ULL) : (13493179516166865903ULL))), (((/* implicit */unsigned long long int) ((int) 13493179516166865926ULL))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) var_6);
        arr_4 [i_1] = ((/* implicit */_Bool) max((1972452997), (((/* implicit */int) (unsigned short)28847))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) var_6);
                            var_25 *= max((((/* implicit */int) (unsigned char)217)), ((-(-2147483627))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)-103))) | ((+(((/* implicit */int) ((((/* implicit */int) (signed char)-50)) < (2147483647))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((var_1) | (2147483632))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)161)) : (-2147483641)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_7]))) + (var_5)))))));
                            var_28 = ((/* implicit */unsigned int) -2147483628);
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) ^ (arr_10 [i_2] [i_2])))))) ? (((long long int) ((unsigned int) -2147483602))) : (((/* implicit */long long int) (((+(2147483588))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    for (signed char i_11 = 2; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((max((var_2), (arr_18 [i_8] [13] [i_8] [i_11 + 1]))) <= (max((((/* implicit */int) (short)22201)), (-1))))) ? (-2147483590) : (var_8)));
                            var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31457280U)) ? (((/* implicit */int) (short)8128)) : (((/* implicit */int) (short)-22189))));
                        }
                    } 
                } 
                var_32 |= ((/* implicit */unsigned short) ((short) max((((/* implicit */int) (_Bool)1)), (4))));
                var_33 = ((/* implicit */signed char) arr_2 [i_8]);
            }
        } 
    } 
}
