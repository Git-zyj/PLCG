/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190629
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
    var_11 = ((((((/* implicit */int) (unsigned char)84)) ^ (((/* implicit */int) (short)-30556)))) * (((/* implicit */int) (unsigned short)33026)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [(signed char)0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (var_10)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(unsigned char)12] [3] [i_1 + 2] [i_1])) | (((/* implicit */int) arr_4 [i_3]))))) > (1765290904U))))) != (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))));
                                var_13 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) % (13785549925202147969ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(signed char)23] [(unsigned short)5] [12ULL] [i_3] [2U])) || (((/* implicit */_Bool) (short)-546)))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_3])) | (((/* implicit */int) var_4)))))));
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_6)) >= (((6862474025375787229ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1 + 2] [(_Bool)1] [i_3] [i_3] [i_4])) * (((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1143661344)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_4]))))) % (((/* implicit */int) (unsigned short)27646))))) * (((1655466357270636771ULL) & (((/* implicit */unsigned long long int) 33030144U))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) == (((/* implicit */int) (signed char)95))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_0] [i_1 + 1])) >= (var_6)))) > (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) ((576460750155939840ULL) == (var_8))))));
                arr_20 [i_5] [i_5] [20] = ((/* implicit */unsigned long long int) ((((var_6) + (((/* implicit */int) var_9)))) * (((/* implicit */int) ((((/* implicit */int) arr_8 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])) >= (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)119)) && (((/* implicit */_Bool) var_4)))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-3))))))))));
}
