/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235827
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
    var_16 = ((/* implicit */short) ((unsigned char) (short)0));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)12705)) : (((/* implicit */int) (short)-28561))));
                    var_18 = ((/* implicit */short) ((var_6) + (((/* implicit */long long int) var_9))));
                    var_19 &= ((/* implicit */short) ((((((3714360014043864449LL) | (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3714360014043864450LL)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_17 [i_6 - 1] [i_5] [i_5] [i_3])))) : (((/* implicit */int) ((_Bool) (signed char)-14))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_5])), (arr_11 [i_4])))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_6 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2340622652U)) || (((/* implicit */_Bool) arr_7 [i_6 + 2])))))) : (((((/* implicit */_Bool) arr_7 [i_6 + 2])) ? (arr_7 [i_6 - 1]) : (arr_7 [i_6 + 2])))));
                            var_22 = ((/* implicit */unsigned int) 12);
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [i_3 + 1] [(_Bool)1]))))) != ((+(((/* implicit */int) var_7))))));
                var_24 *= ((/* implicit */_Bool) (unsigned char)215);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_8 [i_7])) + (2340622652U)))) <= (3714360014043864464LL))) || (((/* implicit */_Bool) ((unsigned int) var_3)))));
        var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((3714360014043864433LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_15 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 3754367987984922729LL)) : (((unsigned long long int) var_6))))));
        var_27 = ((/* implicit */_Bool) (short)0);
        var_28 = ((short) ((_Bool) ((((/* implicit */_Bool) arr_3 [18] [i_7] [i_7])) || (((/* implicit */_Bool) arr_1 [(_Bool)1])))));
    }
    for (unsigned short i_8 = 4; i_8 < 19; i_8 += 2) 
    {
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (~(-1786911915))))));
        var_30 += ((/* implicit */long long int) (unsigned short)40683);
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */short) var_15))));
                    var_32 *= ((/* implicit */_Bool) min((var_9), (((/* implicit */int) ((arr_11 [i_8 - 2]) != (arr_6 [i_8]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (unsigned char i_12 = 4; i_12 < 16; i_12 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) arr_17 [6U] [i_11] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_11] [i_12 + 4]))) : (arr_28 [i_12] [i_11] [i_12]))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-89)))))))));
                    var_34 = ((/* implicit */long long int) ((signed char) 3714360014043864464LL));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 18; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) ((int) (!(((((/* implicit */_Bool) arr_39 [i_8] [i_11] [i_12 + 4] [i_13 + 2] [i_14])) && (((/* implicit */_Bool) var_1)))))));
                                var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (short)32747)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_15 = 1; i_15 < 17; i_15 += 3) 
        {
            var_37 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            var_38 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((2001435328272972372ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_36 [i_8 + 1] [i_15] [i_15] [i_15] [i_15] [i_15]))))))), (((((((/* implicit */int) (short)32761)) != (((/* implicit */int) (signed char)85)))) ? (318344588) : ((~(((/* implicit */int) var_4))))))));
            var_39 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_42 [i_8 - 4] [i_8 - 3] [i_8 - 2])) ? (((/* implicit */int) (signed char)-64)) : (1786911910))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
        }
    }
    var_40 = ((/* implicit */int) 3714360014043864443LL);
}
