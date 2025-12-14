/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21922
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_8 [i_3] [i_3] [i_1] [i_1] [(unsigned short)2] = ((/* implicit */signed char) max(((~(3908675611U))), (((((/* implicit */_Bool) (unsigned short)25477)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (arr_2 [i_1])))));
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                        arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)191)))) <= (536869888U)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8388096U)) ? (((/* implicit */int) ((unsigned short) 1040187392))) : (((/* implicit */int) (short)9105))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))))))));
                        arr_13 [(signed char)2] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (short)19342))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1248016820U)))))));
                    }
                    var_22 = (~(2027755830));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 401700784)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)82))))))))))));
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) (((((_Bool)0) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) arr_4 [i_2] [(_Bool)1] [13])))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-7919)))));
                    var_24 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)211)) || (((/* implicit */_Bool) (unsigned char)82)))));
                }
                var_25 = ((short) ((unsigned short) (+(((/* implicit */int) var_16)))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) > (((/* implicit */int) (short)-16384)))))))) && (((((/* implicit */unsigned int) ((/* implicit */int) ((1430258223U) <= (((/* implicit */unsigned int) var_10)))))) > ((~(var_15)))))));
    var_27 |= ((/* implicit */unsigned short) var_3);
    var_28 = ((/* implicit */unsigned long long int) var_14);
}
