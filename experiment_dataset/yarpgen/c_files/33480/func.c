/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33480
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((var_11) >> (((/* implicit */int) (signed char)11)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)4)) & (((/* implicit */int) (signed char)3)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_14 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) ((((/* implicit */_Bool) -6581621147978339241LL)) && (((/* implicit */_Bool) var_9))))) : (min((-1039449306), (((/* implicit */int) (signed char)-32))))))) + (((((/* implicit */_Bool) 2047656969U)) ? (2743734577801326352LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23324)))))));
            var_15 = ((/* implicit */unsigned int) (+(((((-6581621147978339232LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) ? (1069547520) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)0))))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) >> (((1686507U) - (1686493U))))))) >> (((((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -980368001)))))) : ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219)))))))));
            var_16 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)32601)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) > (min((6581621147978339231LL), (0LL))))))));
            var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (_Bool)0);
                    arr_14 [i_2] [12] [i_2] [i_4] &= ((/* implicit */short) var_7);
                }
            } 
        } 
        var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18742))) % (arr_9 [i_2] [i_2])));
        arr_15 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2]))))), ((+(arr_13 [i_2] [6U] [i_2])))));
        arr_16 [(short)8] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) - (-4169633479105431555LL))) ^ (-7003729545894438362LL)));
    }
    var_20 |= var_5;
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (6581621147978339255LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
}
