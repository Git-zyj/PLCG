/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215100
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_2 [i_0]))))) >> (((((/* implicit */int) var_7)) - (24802)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((10884898726629097136ULL) / (((/* implicit */unsigned long long int) var_8)))))) / (((/* implicit */unsigned long long int) (-((-(var_3))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [(signed char)12])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))))) - (min((var_11), (((/* implicit */unsigned int) var_4))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 += ((max((max((3288465716U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3288465712U)) ? (var_1) : (arr_1 [i_1] [i_1])))))) + (((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_1])), (var_3)))) + ((+(var_11))))));
        var_15 = ((/* implicit */short) var_7);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_16 *= ((/* implicit */unsigned long long int) (unsigned char)255);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_3)))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_9 [i_2] [i_2])))) : ((+(((/* implicit */int) arr_8 [i_2])))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28562))) * (3288465716U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_2] [i_3])) - (((/* implicit */int) var_7)))))));
            }
            arr_16 [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) arr_14 [(unsigned char)1] [i_2]);
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) -460510655);
                arr_21 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [(short)15] [i_3] [i_3] [i_3]))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))) & (-4112127499919149531LL)))));
                var_22 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_10 [i_2] [i_6])) : (((/* implicit */int) var_10))))));
                var_23 = ((/* implicit */unsigned short) var_8);
                arr_24 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(signed char)14] [i_3] [(signed char)14] [i_6]))) : (-4112127499919149520LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
            }
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-5149936131011068777LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) <= (5149936131011068769LL)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_27 [i_7] = ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (var_3))))) : (arr_14 [i_7] [i_2]));
            var_25 = var_8;
        }
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & (((((/* implicit */_Bool) 5149936131011068782LL)) ? (((/* implicit */int) arr_10 [i_2] [i_8])) : (((/* implicit */int) var_10))))));
            var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (-7148531838843503611LL) : (arr_18 [i_2] [i_8] [i_8] [i_8])))));
            arr_30 [10LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_8]))));
            var_28 = ((/* implicit */unsigned short) var_3);
        }
        var_29 = (+(((-6462876993408039156LL) + (((/* implicit */long long int) ((/* implicit */int) var_7))))));
        var_30 = ((/* implicit */unsigned char) (unsigned short)9817);
    }
    var_31 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)79))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (-1439390406389169946LL)))))));
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((var_1) / (((/* implicit */int) (short)-8800)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (3288465716U)))))))));
}
