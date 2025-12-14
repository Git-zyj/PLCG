/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212799
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
    var_14 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (11564243906455836190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) (~(max((10605190826827628809ULL), (13128518580618352242ULL)))))));
    var_15 = ((/* implicit */unsigned short) (+(var_2)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)0);
            arr_7 [i_1] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) ((unsigned char) var_9))))));
        }
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) <= (((/* implicit */int) (unsigned short)41780))))))));
            arr_10 [i_0] [i_2 + 2] = 17079622075695910296ULL;
            var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2777))));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (1981156324991747151LL)))) ? (((min((((/* implicit */unsigned long long int) var_6)), (8ULL))) + (13128518580618352242ULL))) : (((((/* implicit */_Bool) 2412126293504388887LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149)))))) : (((((/* implicit */_Bool) (short)-6999)) ? (18251892947036292799ULL) : (((/* implicit */unsigned long long int) -1543272750))))))));
        arr_11 [i_0] = (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-945))))) : ((+(arr_4 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((int) var_4));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */short) ((unsigned int) (unsigned char)1));
            arr_18 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)932))));
            var_20 |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */signed char) ((-8080160940791055088LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2766)))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_15 [i_3 + 2] [i_4]))));
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28897))) >= (var_2)));
        arr_19 [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -435783789)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [5ULL] [2ULL] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)29259))))));
        arr_23 [1LL] = ((/* implicit */signed char) (!((!(arr_16 [i_5])))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1900766234U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6087296892576828261LL)) ? (((/* implicit */int) (signed char)-38)) : (-171159753)))) ? (((/* implicit */unsigned long long int) 3376107407U)) : (8055767364094792084ULL)))));
        var_25 = min((((unsigned long long int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)204))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) / (var_10))));
    }
}
