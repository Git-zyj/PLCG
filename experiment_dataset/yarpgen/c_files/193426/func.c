/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193426
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
    var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)15)), (183093039090929763ULL)));
    var_16 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_9)) : (var_3)))) >= (min((var_4), (((/* implicit */unsigned long long int) (unsigned short)22179))))))), (var_6)));
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) -609850029)), (min((max((((/* implicit */long long int) var_0)), (var_5))), (((/* implicit */long long int) max((4243854655U), (((/* implicit */unsigned int) -1249639421)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [(unsigned short)12]), (((/* implicit */int) (unsigned char)111))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */short) min((((((/* implicit */_Bool) min((555359257780200284ULL), (((/* implicit */unsigned long long int) (unsigned char)73))))) ? ((-(18263651034618621852ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), ((+(max((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_1] [i_2] [14ULL] [(_Bool)1] [i_1])), (183093039090929753ULL)))))));
                            var_20 = ((/* implicit */unsigned long long int) (unsigned short)63007);
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) ((unsigned int) ((_Bool) arr_0 [i_1 - 2] [i_1 - 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_16 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) ((signed char) (unsigned short)5837)))))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_21 [i_5] [i_4] [i_5] = arr_5 [i_4] [i_5] [i_5] [(unsigned char)17];
                    arr_22 [i_5] = ((unsigned short) (~(((/* implicit */int) (unsigned short)2442))));
                }
                for (int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    arr_25 [(signed char)0] [i_5] [(signed char)0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_7 + 2] [i_7 + 1] [i_7 - 1])), (max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_4] [(short)17]))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 -= ((/* implicit */int) (unsigned char)183);
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)144)))) & (min((1442385057), (1280085219)))));
                    }
                }
                var_24 = ((/* implicit */int) arr_18 [i_5]);
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((15050132893371827776ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) max((arr_12 [i_5]), (arr_12 [i_4])))) : ((((_Bool)1) ? (((unsigned long long int) (unsigned char)71)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))));
            }
        } 
    } 
}
