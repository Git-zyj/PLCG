/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235817
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned short) 0U);
        var_15 &= ((/* implicit */unsigned short) (short)-5909);
        arr_3 [i_0] = ((/* implicit */unsigned char) (short)-5909);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (((((/* implicit */int) (short)15367)) - (15359))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42369))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35928))) | (445962096U))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-26980))) <= (-5443371701348890035LL)));
            var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)105)) || (((/* implicit */_Bool) (unsigned short)23166))));
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_20 += (signed char)107;
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) (short)8188);
            var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) <= (((/* implicit */int) (unsigned short)27680))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53239))) == (4398046511103LL)));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)127))));
            var_24 ^= ((/* implicit */long long int) (unsigned char)63);
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((57344U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5928))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-5924))))))));
        }
    }
    var_26 ^= ((/* implicit */int) ((((/* implicit */int) (short)-5931)) >= (((((/* implicit */int) (unsigned char)99)) >> (((((/* implicit */int) (signed char)-127)) + (157)))))));
}
