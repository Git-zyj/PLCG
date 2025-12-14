/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3686
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((unsigned long long int) (-(((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)240))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (short)7953))));
        }
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-24655))));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_1))))));
        }
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(8797280678960996074ULL))))));
            arr_11 [i_3] = ((/* implicit */unsigned long long int) var_16);
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0)))))));
            var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(12250507988873062779ULL))))));
            arr_12 [i_3] [16] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7132957263705007499ULL)) ? (((/* implicit */int) (unsigned short)38097)) : (((int) var_16))));
        }
        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_5] [i_6] [i_5] |= ((/* implicit */unsigned short) 41098382936672423LL);
                            arr_25 [i_4] [i_4 + 3] [i_5 + 2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((int) var_3));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned char)2))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15360))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_0] [i_5] [i_0] |= ((/* implicit */unsigned long long int) (unsigned char)247);
            }
            for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
            {
                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)212))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38097))))) : (var_2)));
                /* LoopNest 2 */
                for (unsigned int i_9 = 4; i_9 < 23; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)11701)))))));
                            var_27 = ((/* implicit */int) var_4);
                            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 797772222791460743LL)) ? (((/* implicit */int) var_17)) : (var_16))) : ((-(((/* implicit */int) (signed char)-96))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (short)-15360))))));
            }
            for (unsigned int i_11 = 2; i_11 < 23; i_11 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 5513160705140505539ULL))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_0))));
                arr_38 [i_0] [i_4 + 3] |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1))))));
            }
            var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)54))))));
        }
        arr_39 [i_0] = ((/* implicit */unsigned char) (-(2196646447U)));
    }
    for (int i_12 = 1; i_12 < 20; i_12 += 1) 
    {
        arr_42 [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(-2053431024371495700LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : ((~(((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (0U)))))));
        var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((long long int) -1679225908))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)78))))) : (((((/* implicit */_Bool) 1U)) ? (2207840754U) : (2098320872U)))))));
        arr_43 [i_12] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1559880587)) ? (((/* implicit */unsigned long long int) -287830617)) : (13943012122041618289ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 8992654728001914245LL)) ? (4613836979895625672ULL) : (23ULL))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1)))))))));
        arr_44 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -287830617)) ? (((((/* implicit */_Bool) max((12250507988873062764ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)16))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3349385455U))))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14)))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        arr_47 [10U] [10U] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)60))));
        var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(-1559880587)))) ? (var_13) : ((+(var_13)))));
    }
    var_34 &= (~((-(((((/* implicit */_Bool) (unsigned char)19)) ? (2057251490U) : (((/* implicit */unsigned int) 1057537923)))))));
}
