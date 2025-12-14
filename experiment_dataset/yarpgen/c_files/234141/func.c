/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234141
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
    var_15 = ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (min(((~(18446744073709551592ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32376)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] [i_0] &= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)21086)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1]))) : (((long long int) arr_7 [i_2])))))));
                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (5086182860959177405ULL)));
                var_18 = var_2;
            }
            for (int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_12 [i_0] [i_3] [i_0 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
                var_19 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)13)))) % (((/* implicit */int) arr_2 [i_0] [i_0]))));
            }
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0])))))) : ((-(10555185447369909441ULL)))));
        }
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_21 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_14 [i_0])) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 514956199376849406LL)))))))));
            var_22 -= ((/* implicit */int) ((short) (~((+(((/* implicit */int) arr_13 [i_0] [i_0])))))));
            var_23 = var_10;
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((228574763) != (((/* implicit */int) arr_7 [i_4]))))) << (((max((-7679150376586222871LL), (9223372036854775793LL))) - (9223372036854775769LL)))))) + (max((((/* implicit */unsigned long long int) arr_14 [14U])), (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
        }
        var_25 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11217300098646721645ULL)) ? (6545947852735560985ULL) : (((/* implicit */unsigned long long int) -1747749131))))))));
        arr_15 [i_0] [(signed char)10] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) 15689716925093408067ULL)));
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_26 ^= ((/* implicit */unsigned long long int) ((((int) ((_Bool) arr_10 [i_5] [i_5]))) <= (((((/* implicit */_Bool) (~(65528ULL)))) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (max((((/* implicit */int) var_14)), (-1227523283)))))));
        var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(var_2)))) ? (14897318284275582197ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20233)) / (arr_10 [i_5] [i_5]))))))));
        arr_19 [i_5] = 5172012825735993155ULL;
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6]))))) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_20 [i_6])))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_6])) == (((/* implicit */int) arr_20 [i_6])))))));
        var_28 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)511))));
        var_29 = ((/* implicit */int) (signed char)77);
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_7]))) : (max((((((/* implicit */_Bool) arr_24 [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [i_7] [i_8] [i_9 + 2]))))), (((/* implicit */unsigned long long int) var_11))))));
                        var_32 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [14])) ? (((/* implicit */long long int) arr_24 [i_9])) : (arr_26 [i_6] [i_7] [(short)19] [i_7])))) + (13601117441911547599ULL))) % (((/* implicit */unsigned long long int) -1984102987))));
                    }
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        var_33 *= ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (1986381807U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (12249229877724330923ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14508)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5954))) : (((((/* implicit */_Bool) 2041141458U)) ? (arr_26 [11U] [i_7] [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (short)3)))))))) : ((-(((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_8] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_7)))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -297053275)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned char)3])) ? (arr_26 [i_6] [i_6] [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_10 + 1])))))))) : (arr_31 [i_8])));
                        var_36 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32762)) ? (((((/* implicit */_Bool) arr_27 [15] [(unsigned short)6] [(unsigned char)6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [10] [i_7 - 1] [i_7 - 1] [i_10]))) : (arr_26 [i_6] [i_7] [i_8] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54815)))))));
                    }
                    var_37 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_8] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3424826472386534095ULL)))) ? (((/* implicit */unsigned long long int) -5249272714705300189LL)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32579))) : (2550942226076270239ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_8] [i_7 - 1])) ? (((/* implicit */int) arr_28 [i_6] [i_7] [i_8] [i_7 - 1])) : (((/* implicit */int) arr_28 [i_6] [i_7] [i_8] [i_7 - 1]))))));
                }
            } 
        } 
    }
}
