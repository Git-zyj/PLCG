/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43224
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1532519496)) ? (4103267152798429577LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((15728640ULL) != (((/* implicit */unsigned long long int) -8492754723151648429LL)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) min((((((int) 664308526)) == (((/* implicit */int) arr_1 [i_0])))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)171)), (arr_0 [i_0]))))))));
        var_16 ^= ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((short) arr_0 [(signed char)6])))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)84))) : (((/* implicit */int) min((((/* implicit */short) ((_Bool) arr_0 [12LL]))), (arr_1 [10LL])))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 3129910404655306367ULL)))) >= (arr_0 [(_Bool)1]))))) : (((((/* implicit */_Bool) (-(-7670362162504372641LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (536869888))))) : (-4224666155639979787LL))))))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)54))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */unsigned int) (_Bool)1);
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~(arr_4 [i_2] [i_4])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4224666155639979786LL)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((17730178095619215652ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                        var_21 += ((/* implicit */_Bool) arr_4 [i_3] [i_4]);
                    }
                    var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((7670362162504372641LL) - (7670362162504372627LL)))))), (15316833669054245266ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [2ULL] [i_3])) ? (((/* implicit */int) (unsigned char)243)) : ((-(((/* implicit */int) var_11)))))))));
                    arr_14 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) 3437220446503345195ULL));
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        var_23 -= ((/* implicit */long long int) ((max((max((15316833669054245248ULL), (((/* implicit */unsigned long long int) 7670362162504372640LL)))), (((/* implicit */unsigned long long int) min((var_10), (var_10)))))) < (((((/* implicit */_Bool) (short)28934)) ? (14799991604475435632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29795)))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 17; i_8 += 2) 
                {
                    {
                        arr_24 [i_5] [i_6] [i_7] [i_5] [i_7] [i_8] = ((/* implicit */long long int) ((int) var_11));
                        var_24 = ((/* implicit */int) (~((((_Bool)1) ? (arr_10 [i_5 + 1] [i_6 + 2] [i_7] [i_8 + 1]) : (((/* implicit */long long int) 1280984900))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                {
                    arr_30 [i_5] [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (arr_17 [i_5] [i_5]) : (4262703344U)))) ? (((/* implicit */unsigned long long int) -1024LL)) : (((12083208040815786578ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1079))))))) : (((/* implicit */unsigned long long int) -852432193))));
                    arr_31 [i_5 - 1] [i_5] [i_9] [i_10] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned char)84)), (((((/* implicit */_Bool) (unsigned char)62)) ? (17730178095619215652ULL) : (12083208040815786578ULL))))) ^ ((((~(3129910404655306384ULL))) & (((/* implicit */unsigned long long int) min((arr_11 [i_5 + 1] [i_9] [i_9]), (((/* implicit */long long int) (short)-16418)))))))));
                }
            } 
        } 
        arr_32 [i_5] = (-(((((/* implicit */int) arr_3 [i_5 - 1])) * (((/* implicit */int) arr_3 [i_5 - 1])))));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (unsigned char)183)) ? (12083208040815786578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_26 = ((/* implicit */unsigned long long int) ((long long int) (~(min((((/* implicit */long long int) var_0)), (72057585447993344LL))))));
}
