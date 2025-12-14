/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238322
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_8)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max((max((1109368483631880139LL), (((/* implicit */long long int) (unsigned short)3244)))), (((/* implicit */long long int) var_6))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) ((2147483647) ^ (((/* implicit */int) (unsigned short)9439))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)100)))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_1))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    arr_11 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)62286))));
                    arr_12 [i_0] = ((/* implicit */unsigned char) 1124030534);
                }
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (unsigned char)187)))));
                    arr_15 [i_0] [(_Bool)1] [i_0] = (-(((/* implicit */int) var_6)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] = (-(max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (2352422068U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))));
                                arr_21 [i_1] [1LL] [1LL] [i_1] [1LL] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (unsigned short)62284)), (17420342080809781600ULL)))));
                                var_16 = ((/* implicit */unsigned long long int) (unsigned short)62272);
                                var_17 |= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17420342080809781621ULL))))), (min(((unsigned short)3247), (((/* implicit */unsigned short) var_1))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)3238)), (max((2223404480079959793ULL), (((/* implicit */unsigned long long int) var_6)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        arr_26 [i_7] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)56097))));
                        var_18 = ((/* implicit */int) min((min((3622786969520351981LL), (((/* implicit */long long int) (unsigned short)9439)))), (((/* implicit */long long int) var_5))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [(unsigned char)2] [11] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_4)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) -920665831)) ? (11ULL) : (17420342080809781600ULL)));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_7);
                            arr_33 [i_9] [i_9] = (!(((/* implicit */_Bool) var_10)));
                            arr_34 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */signed char) 4787297440193588442LL);
                            var_21 &= ((/* implicit */long long int) (unsigned char)207);
                            arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4787297440193588447LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39155))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) 3966885683754195147ULL);
                            var_23 = (~((~(-3242921291591288316LL))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)60044)))))));
                            var_25 = ((/* implicit */unsigned long long int) (unsigned short)3249);
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] = 3242921291591288341LL;
                        var_26 |= ((/* implicit */unsigned long long int) (~(3242921291591288316LL)));
                        arr_42 [i_11] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) 3966885683754195125ULL))));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_47 [6] = (~((~(7537566757476061371LL))));
                        arr_48 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39886))) > (3966885683754195133ULL)))), ((-(-7537566757476061372LL)))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_28 |= ((/* implicit */unsigned char) ((551079788) >= (((/* implicit */int) (unsigned char)115))));
                        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) (~(((int) var_10))));
                        arr_55 [i_0] [i_1] [i_12] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */long long int) -24414126)) : (-7537566757476061365LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-81))))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1064141028U)));
                        arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)17340))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        for (int i_17 = 1; i_17 < 15; i_17 += 2) 
                        {
                            {
                                arr_62 [i_0] [i_0] [i_1] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(708110469859196606LL)));
                                var_32 = ((/* implicit */unsigned int) (~(max((377018097), (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) var_4);
                }
                arr_63 [i_0] [i_1] = ((/* implicit */long long int) (-(-377018098)));
            }
        } 
    } 
    var_34 &= ((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3242921291591288342LL)) ? (-3242921291591288340LL) : (-5405943764756750526LL)))) ? (-338230604) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))))) + (2147483647))) << (((min((var_3), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) - (81452858991402840ULL)))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((17420342080809781621ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) var_5))));
}
