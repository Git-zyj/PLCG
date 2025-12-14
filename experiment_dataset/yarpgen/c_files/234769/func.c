/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234769
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
    var_20 -= ((/* implicit */signed char) ((short) ((((long long int) (short)-5681)) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (0ULL)))))));
    var_21 = ((/* implicit */long long int) min((max((((/* implicit */int) var_0)), (((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)14)))))), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) ((unsigned char) -894862103)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) | (-8919005983451682186LL))))));
                        var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */int) ((arr_8 [i_0] [i_0] [(short)10] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))) * ((~(((/* implicit */int) (_Bool)0)))))) >> (((((((/* implicit */unsigned long long int) arr_9 [15U] [i_1] [i_2] [i_3] [i_0] [i_3])) | (((unsigned long long int) (_Bool)1)))) - (3322777069ULL)))))));
                        arr_11 [19] [19] [i_2] [19] = ((/* implicit */unsigned long long int) (~((-(0)))));
                    }
                    arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [(unsigned short)17] [12U] [i_1] [i_1] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))) || (((/* implicit */_Bool) ((arr_6 [12] [i_1]) / (6619390299864256202LL))))))) != (((/* implicit */int) (short)-5721))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((arr_6 [(_Bool)1] [i_0]) >= (arr_6 [i_0] [i_0]))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned char)189))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)67)) == (((/* implicit */int) (_Bool)1))));
    }
}
