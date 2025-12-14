/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239424
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_7)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7679387497600980518LL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) << (((((/* implicit */int) ((signed char) (unsigned short)46874))) - (26))))), (((/* implicit */long long int) arr_6 [i_1 - 1] [i_1] [i_2]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) 7679387497600980511LL);
                    arr_11 [i_3] &= ((/* implicit */signed char) (-(-7679387497600980512LL)));
                }
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) 142337149U))), (max((-7679387497600980515LL), (((/* implicit */long long int) arr_10 [i_0] [i_1] [7U] [i_1 + 1]))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(short)15] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_11))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (10323670389197916707ULL)))))))) : (max((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) | ((-9223372036854775807LL - 1LL))))))));
                    var_18 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) -7679387497600980496LL)) ? (arr_2 [i_1] [i_1]) : (7679387497600980497LL))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23)))))))));
                }
                for (int i_5 = 3; i_5 < 13; i_5 += 2) 
                {
                    var_19 = ((/* implicit */int) (+(-14LL)));
                    arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(arr_6 [i_1 + 1] [i_1 + 1] [i_1]))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (signed char)-116)) + (124))))))));
                    arr_17 [i_5] [i_5 - 1] [i_5 - 2] [(_Bool)1] = (-(((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8047))) : (arr_15 [i_0] [i_1 - 1] [i_0] [i_1]))));
                    var_20 = ((/* implicit */signed char) (((~(var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 1] [i_5 - 2] [i_5] [i_5])))));
                    var_21 += ((/* implicit */unsigned short) min((2487420207019303551ULL), ((~(min((12928432209430584400ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2]))))))));
                }
            }
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
            {
                var_22 = ((((/* implicit */long long int) arr_15 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])) == (arr_2 [i_1 - 1] [i_1 + 1]));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16964))))))));
            }
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) var_6);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15959323866690248076ULL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-121))))) : (arr_2 [i_1] [i_1 + 1]))) : (((/* implicit */long long int) 574802577U))));
            }
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_25 [i_0] [i_0] [i_0] = ((((min((3893659254U), (3414096313U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7679387497600980525LL)) ? (((/* implicit */int) (unsigned short)54842)) : (((/* implicit */int) (signed char)112))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 = ((((((/* implicit */_Bool) (unsigned short)45958)) ? (14244550163767006004ULL) : (2487420207019303540ULL))) | (min((((/* implicit */unsigned long long int) arr_23 [i_1] [i_1 - 1] [i_8])), (5518311864278967215ULL))));
                    var_27 = max((max((((/* implicit */unsigned long long int) arr_19 [i_8])), (((arr_28 [i_0] [i_1] [i_8]) % (((/* implicit */unsigned long long int) 574802558U)))))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_8] [i_9] [i_9] [i_9])) != (var_3))))))));
                    var_28 = ((/* implicit */unsigned int) max((12928432209430584390ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [(unsigned short)4])))));
                    arr_29 [i_9] [i_1] [i_1 + 1] = ((/* implicit */_Bool) (unsigned short)48580);
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_29 = ((/* implicit */signed char) min((var_29), ((signed char)107)));
                    var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)127)), (1526663278U)));
                }
            }
        }
        var_31 -= ((/* implicit */_Bool) ((unsigned int) ((int) arr_22 [i_0] [i_0])));
        arr_33 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((426366308U) == (var_5)))))))), (((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) | (14244550163767006021ULL))) : (((/* implicit */unsigned long long int) ((2567519548U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))))))));
    }
}
