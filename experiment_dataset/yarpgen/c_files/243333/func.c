/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243333
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) -8348899317290603366LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))));
        var_21 = ((/* implicit */_Bool) ((short) (_Bool)0));
        var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-8348899317290603366LL))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8348899317290603372LL))) : ((-(6877403590816425545LL)))));
                        var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_21 [i_4] [i_5] [i_6] [i_6] [i_6] [i_7 - 1] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11)))))));
                        var_24 = ((/* implicit */unsigned char) (+((-(((long long int) 6716198134297863987LL))))));
                        arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 8348899317290603365LL))) ? ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (min((-5715962186178325197LL), (2918572275998676150LL)))))));
                        arr_23 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)91))))) ? (-1272073870) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_24 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_12 [i_4 + 2])), (2918572275998676150LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (short)32730)) : (((/* implicit */int) (unsigned short)49515)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4 - 2] [12U] [(unsigned char)4])))))))) : (((long long int) min((-235124701483741970LL), (((/* implicit */long long int) arr_20 [i_4] [i_4])))))));
        arr_25 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (unsigned char)246)))) ? (((((/* implicit */_Bool) -235124701483741970LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21)))))))));
    }
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (!((_Bool)1)))))));
}
