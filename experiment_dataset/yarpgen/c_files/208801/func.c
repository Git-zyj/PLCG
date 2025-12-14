/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208801
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) (signed char)62))))), ((~(max((((/* implicit */unsigned long long int) (signed char)67)), (arr_2 [i_0] [i_1]))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-68)) ? (1824673929U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((((((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)0)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (min((((/* implicit */int) (signed char)-76)), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)25043)) : (((/* implicit */int) (signed char)-66))))))));
    var_15 += ((/* implicit */unsigned int) (-(var_4)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)145)), (1505066963U)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (min((((((/* implicit */_Bool) 2038743689U)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (short)-21566)))), (((/* implicit */int) var_2))))));
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (signed char)121);
                                arr_23 [i_2] [i_2] [(short)10] [i_5] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    var_18 &= (signed char)(-127 - 1);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((257263775), (((/* implicit */int) arr_14 [i_2] [i_2])))))));
        arr_24 [i_2] [10ULL] = ((/* implicit */_Bool) max(((((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) | (13158335910438623283ULL))) : (((/* implicit */unsigned long long int) 5379891351182212259LL)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -3409508411866320880LL)) ? (0LL) : (((/* implicit */long long int) arr_13 [10] [i_2] [i_2])))), (((/* implicit */long long int) (unsigned char)240)))))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32755))))) ? (arr_8 [i_2]) : (((((/* implicit */_Bool) (short)31845)) ? (((/* implicit */int) (short)21566)) : (((/* implicit */int) (short)-21570))))));
        arr_25 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [(unsigned char)12] [(_Bool)1])) ? (((140462610448384ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)83)) >> (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)3218))))), (((((/* implicit */_Bool) 4121256078583141923ULL)) ? (arr_20 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [i_7])))))))) : (((((((/* implicit */_Bool) (signed char)13)) ? (14325487995126409693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8535)))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) arr_19 [i_7] [i_7]))))) ? (((((/* implicit */_Bool) arr_19 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (arr_6 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_27 [(unsigned char)5])), (2891560375474580028LL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 14; i_8 += 1) 
        {
            var_23 = (unsigned char)27;
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) 9799314159158324541ULL);
                        var_25 = ((/* implicit */unsigned long long int) arr_1 [i_7]);
                    }
                } 
            } 
        }
        var_26 &= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7] [i_7])))))));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 11; i_11 += 1) 
    {
        arr_40 [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1280935854U)) % (arr_5 [i_11] [i_11 - 1])));
        arr_41 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_11 - 2])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (10683190250861526303ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2952266732U)) ? (arr_8 [i_11]) : (((/* implicit */int) (unsigned short)38045)))))));
    }
}
