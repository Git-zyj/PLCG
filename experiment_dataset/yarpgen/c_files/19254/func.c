/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19254
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
    var_11 = ((/* implicit */signed char) ((6505761330991915520ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [(unsigned char)12] |= ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) arr_9 [(unsigned char)7]);
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 305861380)) ? (((/* implicit */int) (unsigned short)919)) : (((/* implicit */int) (unsigned char)3)))))));
                        arr_12 [i_1 - 1] = ((/* implicit */long long int) (signed char)127);
                        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)26))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (~(((var_3) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_5] [i_1 - 1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_1 + 1]))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)4199)) || (((/* implicit */_Bool) 70368744177663ULL)))))));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)68))));
                            arr_24 [i_0] [17U] [i_0 - 2] [i_0 - 2] = var_5;
                            arr_25 [i_0 - 2] [i_0 - 2] [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_17 [i_0] [i_4] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) var_4);
            arr_28 [i_7] = ((/* implicit */signed char) ((arr_20 [i_0] [i_7] [i_7 + 1] [i_0 - 2] [i_7]) / (((((/* implicit */unsigned long long int) 1933516367U)) % (536870911ULL)))));
            var_18 = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned char)89)))) + (2147483647))) >> (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)177)))))) : (-1LL)))));
        }
        for (signed char i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (short)-21508);
                            arr_41 [i_11] [i_11] [i_10] [i_11] [i_11] [i_11] |= ((-15LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                            arr_42 [i_0] [i_0] [(short)6] [i_0 - 3] [i_11] [i_0] [i_0] = ((/* implicit */long long int) arr_13 [i_9] [i_9]);
                            var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (-5988030230805370853LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((unsigned long long int) arr_0 [17U])))))));
                        var_22 ^= (-(((/* implicit */int) arr_39 [i_10] [i_8])));
                        var_23 = ((/* implicit */unsigned short) var_1);
                        arr_43 [i_9] [(signed char)8] [7LL] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) 7503564860411762062LL);
                    }
                } 
            } 
            var_24 = ((int) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)242))));
        }
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) - (min((3455425633526334369ULL), (((/* implicit */unsigned long long int) (signed char)-77))))));
    }
    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min(((~(arr_44 [i_12]))), (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)231))))), (arr_44 [i_12]))))))));
        arr_46 [i_12] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) >> (((arr_44 [i_12]) - (5620002385597509697LL)))))) ? ((~(((/* implicit */int) (signed char)-77)))) : ((-(((/* implicit */int) var_3))))));
    }
    /* LoopSeq 2 */
    for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                {
                    var_27 += ((/* implicit */unsigned long long int) min((-2360102001049591740LL), (((/* implicit */long long int) 2147483647))));
                    arr_59 [i_13] [(unsigned short)2] [i_14] [i_13] = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1943355600)) ? (-2713215845226159172LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109)))));
        var_29 = ((/* implicit */int) (short)32767);
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_2))));
    }
    for (short i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2360102001049591739LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (5090889562077509438ULL) : (((/* implicit */unsigned long long int) 1859122341U)))))) / (((/* implicit */unsigned long long int) var_1)))))));
        arr_63 [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)14082)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_35 [i_16] [i_16] [i_16] [i_16])) + (arr_30 [i_16]))))));
        var_32 = ((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_4 [i_16]))))))) == (max((2147483621), (((/* implicit */int) (signed char)120))))));
    }
}
