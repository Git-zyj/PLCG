/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31642
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
    var_20 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_4))));
    var_22 &= ((/* implicit */_Bool) ((long long int) var_3));
    var_23 = ((/* implicit */int) ((((/* implicit */int) (signed char)-39)) < (((/* implicit */int) (unsigned short)40617))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_24 += ((/* implicit */short) -1324342221);
        var_25 = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
        arr_2 [i_0] |= ((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_4))))) ^ (min((((/* implicit */unsigned long long int) (signed char)64)), (arr_8 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (var_1)));
                    arr_9 [i_2] [i_2] = ((/* implicit */int) (signed char)37);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_17 [(_Bool)1] [(_Bool)1] [i_5] |= ((/* implicit */int) var_15);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_20 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1324342211)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2970599037U)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) ((min((((8960121721220214482ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))), (((/* implicit */unsigned long long int) (-(arr_12 [i_7])))))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_18) ^ (((/* implicit */int) var_0))))), (((long long int) (unsigned char)47)))))));
                            var_27 -= ((var_15) > (((/* implicit */long long int) ((/* implicit */int) var_0))));
                            arr_25 [i_4] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) max((arr_12 [i_5]), (((/* implicit */unsigned int) var_16))))) + (((1355073221798113717ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28699)))))))));
                            var_28 &= ((/* implicit */unsigned short) 1601672269885163559LL);
                            arr_26 [i_7] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (((!(var_4))) || (((((/* implicit */_Bool) max((arr_12 [i_5]), (((/* implicit */unsigned int) arr_19 [i_3] [i_6] [i_5] [i_4] [i_3]))))) || (((/* implicit */_Bool) arr_12 [i_5]))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_6] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_16)) / (arr_5 [i_3 + 1]))) / (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            arr_31 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((min((((/* implicit */unsigned long long int) -1LL)), (((((/* implicit */_Bool) (signed char)76)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_8])))))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-1)), (((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (unsigned short)50208))))) ? (((unsigned long long int) arr_29 [i_6] [i_6] [i_3] [i_3] [i_6])) : (((unsigned long long int) arr_1 [i_5])))))))));
                        }
                        arr_32 [i_3] [i_3] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) (signed char)55);
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_37 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_0 [i_3] [i_9])) ? (var_18) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((short) (unsigned short)60670))))), ((-(((/* implicit */int) arr_7 [i_3]))))));
                        arr_38 [i_3] [i_4] [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)49845);
                    }
                    var_31 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_10)))));
                }
            } 
        } 
        arr_39 [i_3] = ((/* implicit */short) var_15);
    }
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_32 -= ((/* implicit */short) (unsigned short)31015);
        var_33 &= (-(((((/* implicit */int) var_19)) / (((/* implicit */int) arr_4 [i_10] [i_10])))));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_34 -= ((/* implicit */_Bool) (-(((/* implicit */int) (((-(((/* implicit */int) arr_46 [i_11])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 13055880668597778687ULL))))))))));
        arr_47 [i_11] = ((/* implicit */unsigned short) (-(var_10)));
        arr_48 [i_11] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6764)) & (((/* implicit */int) var_13))))), (((unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (684311128U))))))));
    }
}
