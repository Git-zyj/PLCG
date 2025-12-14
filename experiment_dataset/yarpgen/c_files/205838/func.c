/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205838
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (3818323555U)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) 13616196429680935271ULL);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(-2147483627)))) / (var_13)));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) * (var_8)))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_14))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                                arr_18 [i_1] [i_1] [i_3 - 1] [(unsigned char)16] [i_3 - 1] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (min((var_11), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -7323838055063251322LL))))))))));
                            }
                        } 
                    } 
                    var_19 = ((int) var_10);
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4299351802339036246LL)) ? (((/* implicit */int) (signed char)-43)) : (-2147483633))) | ((~(1769410876)))));
        var_21 = ((/* implicit */int) ((long long int) (((-(((/* implicit */int) (short)-23750)))) << (((((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_12))) + (3677310950883860751LL))))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */int) (unsigned short)4796)) : (((/* implicit */int) (short)21635)))) : ((~(((/* implicit */int) (unsigned short)4804)))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (4532044257623857705ULL) : (2251799813685247ULL)))) || ((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60727)))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_8))) ? (((long long int) var_8)) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (537077098U)))))) - (3274544826LL)))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((16001650486631331335ULL) / (14802628456720752586ULL)))));
                                arr_30 [i_6] [i_6] [i_7] [i_6] [(short)5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1178055649) : (((/* implicit */int) (short)13510))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_0))))) : ((~(((((/* implicit */long long int) 3554973746U)) - (-3685945469953775106LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) max(((~(3757890184U))), (var_8)));
}
