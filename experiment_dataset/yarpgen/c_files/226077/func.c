/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226077
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */signed char) ((max(((((-2147483647 - 1)) / (((/* implicit */int) arr_5 [(short)4] [i_0 + 1] [(short)4])))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_11)))))) % ((-(((/* implicit */int) min(((unsigned short)65522), (((/* implicit */unsigned short) arr_4 [4LL] [4] [(unsigned char)4])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)48334), (((/* implicit */unsigned short) arr_4 [i_0 + 3] [i_1 + 1] [i_0]))))), ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)17202)) == (((/* implicit */int) arr_4 [i_1 + 1] [(short)10] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [(signed char)9] [i_0])) ? (((/* implicit */int) (unsigned short)17202)) : (((/* implicit */int) (unsigned short)17179))))) ? (((/* implicit */int) (short)-8567)) : (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)48327)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_3 [(short)1] [i_0] [(signed char)3]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */int) (unsigned short)38592)) : (((/* implicit */int) (unsigned char)142))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 9; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)0)) << (((var_13) - (17604631591964247896ULL)))))))));
                arr_13 [i_2] [i_2 + 3] [i_2] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)32)) : (((((/* implicit */int) (short)8566)) % (((/* implicit */int) (short)-8566)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) max((var_18), (((/* implicit */short) (unsigned char)126)))))), (((min((-1297658894), (((/* implicit */int) var_7)))) / ((~(((/* implicit */int) var_19))))))));
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 24; i_4 += 2) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                var_24 *= ((/* implicit */unsigned short) ((int) arr_15 [i_4] [i_5]));
                /* LoopNest 3 */
                for (unsigned int i_6 = 3; i_6 < 24; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                arr_30 [(short)20] [i_5] [i_6] [i_5] [i_4] &= ((/* implicit */signed char) max((((/* implicit */long long int) var_3)), (524280LL)));
                                arr_31 [(short)1] [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4] [i_4 + 1] [i_4] [i_7])) && (((/* implicit */_Bool) arr_23 [i_4 + 1] [i_4 - 1] [i_8] [i_4 - 1]))))))));
                                var_25 = ((/* implicit */_Bool) ((4712493426338127653LL) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (1297658904) : (((/* implicit */int) var_19)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
