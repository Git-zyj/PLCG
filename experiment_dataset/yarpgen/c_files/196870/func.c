/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196870
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_12))));
    var_15 &= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)6] [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) != (((((/* implicit */_Bool) (unsigned char)0)) ? (1905964702019555390ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))));
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) arr_2 [(unsigned short)2] [i_0]))))) + (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))) / (((/* implicit */int) arr_4 [i_0] [(signed char)9]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) (unsigned char)0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) (unsigned short)12);
                var_19 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))))) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
                var_20 += ((/* implicit */int) max(((unsigned short)20283), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_7))) <= (((/* implicit */int) arr_7 [i_2])))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)255))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3]))))) || (((/* implicit */_Bool) ((signed char) var_12))))))));
            }
        } 
    } 
}
