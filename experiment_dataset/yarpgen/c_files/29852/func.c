/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29852
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)10163)) : (((/* implicit */int) (signed char)-108)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned short)38662)) : (((/* implicit */int) (signed char)22))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21083)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)29044)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)54485)) : (((/* implicit */int) (unsigned short)0))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9799)) ? (((/* implicit */int) (unsigned short)23071)) : (((/* implicit */int) (unsigned char)253))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)86))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_7 [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)21739))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_19 [(unsigned short)9] [i_3] [i_6] [(signed char)9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2644)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned short)31422))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-118))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (signed char)63))));
                                var_27 ^= (unsigned short)4690;
                                arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6329)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)19753))));
                                arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1930)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (unsigned char)44))));
    }
    for (unsigned char i_7 = 3; i_7 < 9; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)14353)) : (((/* implicit */int) (unsigned char)85)))), (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned short)37252))))));
        arr_24 [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)211)))), ((unsigned short)9086)));
        var_30 = (unsigned short)65125;
    }
    var_31 = ((/* implicit */unsigned char) (unsigned short)50465);
}
