/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21952
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
    var_17 = ((/* implicit */long long int) (signed char)51);
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_8)))) : ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)63))))))));
    var_19 = ((/* implicit */long long int) ((var_14) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))) == (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)149))))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) & (min((((long long int) 8256364630361618946LL)), (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)16462)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */long long int) (-(((((((/* implicit */int) (unsigned char)118)) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) ((unsigned char) 1353395819352533109LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) (unsigned short)15699))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 5347164968725336939LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : ((-9223372036854775807LL - 1LL)))))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_23 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37353))) > (2661641159624770793LL)));
                                arr_12 [i_0 + 3] [i_0 + 1] [i_0] [i_0] [6LL] [i_0] [i_0 + 3] = ((/* implicit */signed char) (unsigned char)17);
                                var_24 |= 5347164968725336923LL;
                                arr_13 [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-50))))));
                                var_25 &= ((unsigned short) ((signed char) (-(((/* implicit */int) (signed char)63)))));
                            }
                            var_26 = (-(min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32086))) / (arr_10 [i_2] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
