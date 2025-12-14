/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238197
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2044254086349232373LL)) + (17973167420228281726ULL)));
    var_16 = ((/* implicit */int) var_6);
    var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19116))) : (((623200959U) << (((((/* implicit */int) var_9)) - (131))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)109)) ? (623200959U) : (((/* implicit */unsigned int) 285508392)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)158)) != (((/* implicit */int) var_8))))))));
        arr_2 [i_0] = ((/* implicit */int) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) var_14)) ? (10900420632577985864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) 3188992925U)) * (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1823982882750504210LL)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */_Bool) ((((7723041150088600870ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))) >> (((((/* implicit */int) var_9)) - (99)))));
        }
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((((/* implicit */int) (unsigned char)147)) & (((/* implicit */int) (unsigned short)124))))));
                            var_21 = ((/* implicit */unsigned char) 2251799813685248LL);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (10900420632577985864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))) >> (((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (3347258010957151569LL))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) ((var_6) / (((/* implicit */unsigned long long int) var_11))));
        }
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27198)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)230)) ? (1442437673) : (((/* implicit */int) var_7))))) : (15LL)));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
